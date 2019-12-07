#include <iostream>
#include <string.h>

#define TABSAPCES 6
#define TABTREE 5

using namespace std;

int tempIndex = 0, labelIndex = 0;
enum NodeKind{ConstK,IdK,IdArrayK,TypeK,FnK, OpK, ReturnK, LoopK, CondK, CallK, AtrK};

struct treeNode{
    treeNode *child[3], *sibling;
    NodeKind nodeKind;
    string name;
    int val;
};

treeNode *newNode(NodeKind kind){
    treeNode *node = (treeNode *) malloc(sizeof(treeNode));
    for(int i = 0; i < 3; i++) node->child[i] = NULL;
    node->sibling = NULL;
    node->nodeKind = kind;
    return node;
}

string tabTree(int treeLevel){
  string ret = "";
  for(int i=0;i<treeLevel*TABTREE;i++){
    ret = ret + " ";
  }
  return ret;
}

string showTree(treeNode *tree, bool is_brother, int treeLevel){
  if(tree == NULL) return "";
  if(treeLevel==0)
    return "{\n'tree:'" + showTree(tree, false, 1) + "\n}\n";
  string ret = "";
  if(tree->sibling!=NULL && is_brother==false)
    ret = "\n" + tabTree(treeLevel) + "[\n"+tabTree(treeLevel)+"{\n"+tabTree(treeLevel)+"'Node': ";
  else
    ret = "\n" + tabTree(treeLevel) + "{\n"+tabTree(treeLevel)+"'Node': ";
  switch(tree->nodeKind){
    case ConstK:
      ret = ret + to_string(tree->val);
    break;
    case FnK:
      ret = ret + "'FUNCTION', ";
    break;
    case ReturnK:
      ret = ret + "'return', ";
    break;
    case LoopK:
      ret = ret + "'while', ";
    break;
    case CondK:
      ret = ret + "'if', ";
    break;
    case CallK:
      ret = ret + "'CALL - " + tree->name + "',";
    break;
    default:
      ret = ret + "'" + tree->name + "',";
  }
  if(tree->child[0]!=NULL)
    ret = ret + "\n"+tabTree(treeLevel)+"'child[0]': " + showTree(tree->child[0], false, treeLevel+1);
  if(tree->child[1]!=NULL)
    ret = ret + "\n"+tabTree(treeLevel)+"'child[1]': " + showTree(tree->child[1], false, treeLevel+1);
  if(tree->child[2]!=NULL)
    ret = ret + "\n"+tabTree(treeLevel)+"'child[2]': " + showTree(tree->child[2], false, treeLevel+1);

  ret = ret + "\n"+tabTree(treeLevel)+"}";
  if(tree->sibling!=NULL && is_brother==false){
    ret = ret + ",";
    treeNode *aux = tree->sibling;
    while(aux!=NULL){
      ret = ret + showTree(aux, true, treeLevel);
      if(aux->sibling!=NULL)
        ret = ret + tabTree(treeLevel)+",";
      aux = aux->sibling;
    }
  }
  if(tree->sibling!=NULL && is_brother==false)
    string ret = "\n" + tabTree(treeLevel) + "]\n";
  return ret;
}

int countParams(treeNode *tree){
	int ret = 0;
	while(tree!=NULL){
		ret++;
		tree = tree->sibling;
	}
	return ret;
}

string getOppositeOperator(string a){
	if(a == "<") return ">=";
	if(a == "<=") return ">";
	if(a == ">") return "<=";
	if(a == ">=") return "<";
	if(a == "==") return "!=";
	if(a == "!=") return "==";
}

string tabGenerator(string first_word, bool is_label){
  string ret = "";
  int i;
  for(i=first_word.length(); i<=TABSAPCES;i++){
    ret = ret + " ";
  }
  if(is_label)
    return first_word+ret;
  else
    return ret+first_word;
}

static string threeAdressCode = "goto main\n";

string codeGenerator(treeNode *tree, int flag){
	if(tree==NULL) return " ";
	switch(tree->nodeKind){
		case OpK:{
			string a = codeGenerator(tree->child[0],1);
			string b = codeGenerator(tree->child[1],1);
			if(flag == 2){
				return a  + " " + tree->name + " " + b;
			}else if(flag == 3){
				return a + " " + getOppositeOperator(tree->name) + " " + b;
			}else{
				if(tree->name != "="){
					threeAdressCode = threeAdressCode + tabGenerator("", false) + "_t" + to_string(tempIndex) + " = " + a + tree->name + b + "\n";
					tempIndex++;
					return "_t" + to_string(tempIndex-1);
				}else{
					threeAdressCode = threeAdressCode + tabGenerator("", false) + a + " = " + b + "\n";
					if(tree->sibling != NULL) codeGenerator(tree->sibling,0);
					return " ";
				}
			}
			break;
		}
		case IdK:
			if(flag == 2){
				threeAdressCode = threeAdressCode + tabGenerator("", false) + "param " + tree->name + "\n";
				if(tree->sibling != NULL)codeGenerator(tree->sibling,2);
				return " ";
			}else{
				return tree->name;
				break;
			}
		case ConstK:
			if(flag == 2){
				threeAdressCode = threeAdressCode + tabGenerator("", false) + "param " + to_string(tree->val) + "\n";
				if(tree->sibling != NULL)codeGenerator(tree->sibling,2);
				return " ";
			}else{
				return to_string(tree->val);
			}
			break;
		case FnK:
			threeAdressCode = threeAdressCode + "\n" + tree->name + ": " + "\n";
			codeGenerator(tree->child[1],0);
			if(tree->sibling != NULL)  codeGenerator(tree->sibling,0);
			return " ";
			break;
		case TypeK:
			if(tree->child[0]->nodeKind == FnK) codeGenerator(tree->child[0],0);
			if(tree->sibling != NULL) codeGenerator(tree->sibling,0);
			return " ";
			break;
		case CallK:{
			if(flag == 0){
				int n = 0;
				if(tree->child[0] != NULL){
					n = countParams(tree->child[0]);
          if(n>1)
            threeAdressCode = threeAdressCode + "\n";
					codeGenerator(tree->child[0],2);
				}
				threeAdressCode = threeAdressCode + tabGenerator("", false) + "call " + tree->name + ","  + to_string(n) + "\n";
				if(tree->sibling != NULL) codeGenerator(tree->sibling,0);
				return " ";
			}else if(flag==1){
				int n = 0;
				if(tree->child[0] != NULL){
					n = countParams(tree->child[0]);
					codeGenerator(tree->child[0],2);
				}
				threeAdressCode = threeAdressCode + tabGenerator("", false) + "_t" + to_string(tempIndex) +  " = "  + "call " + tree->name + ","  + to_string(n) + "\n";
				tempIndex++;
				return "_t" + to_string(tempIndex-1);
			}else{
				int n = 0;
				if(tree->child[0] != NULL){
					n = countParams(tree->child[0]);
					codeGenerator(tree->child[0],2);
				}
				threeAdressCode = threeAdressCode + tabGenerator("", false) + "_t" + to_string(tempIndex) +  " = "  + "call " + tree->name + ","  + to_string(n) + "\n";
				threeAdressCode = threeAdressCode + tabGenerator("", false) + "param " + "_t" + to_string(tempIndex) + "\n";
				tempIndex++;
				if(tree->sibling != NULL) codeGenerator(tree->sibling,2);
				return " ";
				break;
			}
		}
		case CondK:{
			string a;
			int label1, label2;
			label1 = labelIndex;
			label2 = labelIndex + 1;
			labelIndex += 2;
			a = codeGenerator(tree->child[0],2);
			threeAdressCode = threeAdressCode + tabGenerator("", false) + "if " + a + " goto _L" + to_string(label1) + "\n";
			if(tree->child[2] != NULL) codeGenerator(tree->child[2],0);
			threeAdressCode = threeAdressCode + tabGenerator("", false) + "goto _L" + to_string(label2) + "\n";
			threeAdressCode = threeAdressCode + tabGenerator("_L"+to_string(label1)+":", true) + "\n";
			codeGenerator(tree->child[1],0);
			threeAdressCode = threeAdressCode + tabGenerator("_L"+to_string(label2)+": ", true) + "\n";
			if(tree->sibling != NULL) codeGenerator(tree->sibling,0);
			return " ";
			break;
		}
		case LoopK:{
			string a;
			int label1, label2;
			label1 = labelIndex;
			label2 = labelIndex + 1;
			labelIndex += 2;
			a = codeGenerator(tree->child[0],3);
			threeAdressCode = threeAdressCode + tabGenerator("_L" +to_string(label1)+":", true) + "if " + a + " goto _L" + to_string(label2) + "\n";
			codeGenerator(tree->child[1],0);
			threeAdressCode = threeAdressCode + tabGenerator("", false) + "goto _L" + to_string(label1) + "\n";
			threeAdressCode = threeAdressCode + tabGenerator("_L"+to_string(label2)+": ", true);
			if(tree->sibling != NULL) codeGenerator(tree->sibling,0);
			return " ";
			break;
		}
		case ReturnK:{
			if(tree->child[0] != NULL){
				string a = codeGenerator(tree->child[0],0);
				threeAdressCode = threeAdressCode + "return " + a +"\n";
			}else{
				threeAdressCode = threeAdressCode + "return " + "\n";
			}
			return " ";
			break;
		}
		case IdArrayK:
			threeAdressCode = threeAdressCode + tabGenerator("", false) + "_t" + to_string(tempIndex) + " = " +  codeGenerator(tree->child[0],0) + "*4" + "\n";
			tempIndex++;
			return tree->name + "[" + "_t" + to_string(tempIndex - 1) + "]";
			break;
	}
}

static string quadCode = "(goto, main,,)\n";

string codeGeneratorQuad(treeNode *tree, int flag){
	if(tree==NULL) return " ";
	switch(tree->nodeKind){
		case OpK:{
			string a = codeGeneratorQuad(tree->child[0],1);
			string b = codeGeneratorQuad(tree->child[1],1);
			if(tree->name != "="){
				quadCode = quadCode + "(" + tree->name + "," + a + "," + b + "," + "_t" + to_string(tempIndex) + ")" + "\n";
				tempIndex++;
				return "_t" + to_string(tempIndex-1);
			}else{
				quadCode = quadCode + "(asn," + b + ",," + a + ")" + "\n";
				if(tree->sibling != NULL) codeGeneratorQuad(tree->sibling,0);
				return " ";
			}

			break;
		}
		case IdK:
			if(flag == 2){
				quadCode = quadCode + "(param," + tree->name + ",,)" + "\n";
				if(tree->sibling != NULL)codeGeneratorQuad(tree->sibling,2);
				return " ";
			}else{
				return tree->name;
				break;
			}
		case ConstK:
			if(flag == 2){
				quadCode = quadCode + "(param," + to_string(tree->val) + ",,)" + "\n";
				if(tree->sibling != NULL)codeGeneratorQuad(tree->sibling,2);
				return " ";
			}else{
				return to_string(tree->val);
			}
			break;
		case FnK:
			quadCode = quadCode + "(label," + tree->name + ",,)" + "\n";
			codeGeneratorQuad(tree->child[1],0);
			if(tree->sibling != NULL)  codeGeneratorQuad(tree->sibling,0);
			return " ";
			break;
		case TypeK:
			if(tree->child[0]->nodeKind == FnK) codeGeneratorQuad(tree->child[0],0);
			if(tree->sibling != NULL) codeGeneratorQuad(tree->sibling,0);
			return " ";
			break;
		case CallK:{
			if(flag == 0){
				int n = 0;
				if(tree->child[0] != NULL){
					n = countParams(tree->child[0]);
					codeGeneratorQuad(tree->child[0],2);
				}
				quadCode = quadCode + "(call," + tree->name + "," + to_string(n) + ",)" + "\n";
				if(tree->sibling != NULL) codeGeneratorQuad(tree->sibling,0);
				return " ";
			}else if(flag==1){
				int n = 0;
				if(tree->child[0] != NULL){
					n = countParams(tree->child[0]);
					codeGeneratorQuad(tree->child[0],2);
				}
				quadCode = quadCode + "(call," + tree->name + "," + to_string(n) + "," + "_t" + to_string(tempIndex) + ")" + "\n";
				tempIndex++;
				return "_t" + to_string(tempIndex-1);
			}else{
				int n = 0;
				if(tree->child[0] != NULL){
					n = countParams(tree->child[0]);
					codeGeneratorQuad(tree->child[0],2);
				}
				quadCode = quadCode + "(call," + tree->name + "," + to_string(n) + "," + "_t" + to_string(tempIndex) + ")" + "\n";
				quadCode = quadCode + "(param," + "_t" + to_string(tempIndex) + ",,)" + "\n";
				tempIndex++;
				if(tree->sibling != NULL) codeGeneratorQuad(tree->sibling,2);
				return " ";
				break;
			}
		}
		case CondK:{
			string a;
			int label1, label2;
			label1 = labelIndex;
			label2 = labelIndex + 1;
			labelIndex += 2;
			a = codeGeneratorQuad(tree->child[0],2);
			quadCode = quadCode + "(if_t," + a + ",_L" + to_string(label1) + ",)" + "\n";
			if(tree->child[2] != NULL) codeGeneratorQuad(tree->child[2],0);
			quadCode = quadCode + "(goto,_L" + to_string(label2) + ",,)" + "\n";
			quadCode = quadCode + "(label,_L" + to_string(label1) + ",,)" + "\n";
			codeGeneratorQuad(tree->child[1],0);
			quadCode = quadCode + "(label,_L" + to_string(label2) + ",,)" + "\n";
			if(tree->sibling != NULL) codeGeneratorQuad(tree->sibling,0);
			return " ";
			break;
		}
		case LoopK:{
			string a;
			int label1, label2;
			label1 = labelIndex;
			label2 = labelIndex + 1;
			labelIndex += 2;
			quadCode = quadCode + "(label,_L" + to_string(label1) + ",,)" + "\n";
			a = codeGeneratorQuad(tree->child[0],3);
			quadCode = quadCode + "(if_f," + a + ",_L" + to_string(label2) + ",)" + "\n";
			codeGeneratorQuad(tree->child[1],0);
			quadCode = quadCode + "(goto,_L" + to_string(label1) + ",,)" + "\n";
			quadCode = quadCode + "(label,_L" + to_string(label2) + ",,)" + "\n";
			if(tree->sibling != NULL) codeGeneratorQuad(tree->sibling,0);
			return " ";
			break;
		}
		case ReturnK:{
			if(tree->child[0] != NULL){
				string a = codeGeneratorQuad(tree->child[0],0);
				quadCode = quadCode + "(ret," + a + ",,)" + "\n";
			}else{
				quadCode = quadCode + "(ret,,,)";
			}
			return " ";
			break;
		}
		case IdArrayK:
			quadCode = quadCode + "(*," + codeGeneratorQuad(tree->child[0],0) + ",4,_t" + to_string(tempIndex) + ")" + "\n";
			tempIndex++;
			return tree->name + "[" + "_t" + to_string(tempIndex - 1) + "]";
			break;
	}
}
