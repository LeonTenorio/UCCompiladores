/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "compilador.y"


#include <iostream>
#include <fstream>
#include <string.h>
#include <stack>
#include "arvore.cpp"
#include "symtab.cpp"
#include "utils.c"
#define YYSTYPE treeNode *
#define SIZE 523

using namespace std;

static treeNode *savedTree;
int savedInt;
extern char currentToken[];
extern BucketList hashTable[SIZE];

extern "C"
{
  int yylex(void);
  void abrirArq();
}
extern char* yytext;
extern int yylineno;
int nLine;
string currentFunction = " ";

void yyerror(char *);

stack<string> savedIDs;


#line 105 "compilador.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_COMPILADOR_TAB_H_INCLUDED
# define YY_YY_COMPILADOR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    VOID = 259,
    IF = 260,
    ELSE = 261,
    WHILE = 262,
    RETURN = 263,
    NUM = 264,
    ID = 265,
    ADD = 266,
    SUB = 267,
    MUL = 268,
    DIV = 269,
    PRTO = 270,
    PRTC = 271,
    SBTO = 272,
    SBTC = 273,
    SCL = 274,
    COM = 275,
    KEYO = 276,
    KEYC = 277,
    ATR = 278,
    LT = 279,
    LTE = 280,
    GT = 281,
    GTE = 282,
    EQ = 283,
    NEQ = 284,
    ERR = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILADOR_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   119

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  117

#define YYUNDEFTOK  2
#define YYMAXUTOK   285

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    74,    85,    90,    92,    97,    97,   114,
     114,   114,   136,   141,   149,   149,   167,   181,   191,   197,
     200,   203,   206,   209,   215,   218,   224,   235,   238,   245,
     255,   259,   266,   273,   279,   279,   287,   287,   300,   304,
     308,   312,   316,   320,   327,   333,   339,   343,   350,   356,
     362,   366,   373,   376,   379,   379,   383,   389,   389,   400,
     403,   409,   419,   426,   431,   437,   447,   453,   456,   462,
     472,   478,   489,   489,   502,   503
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "VOID", "IF", "ELSE", "WHILE",
  "RETURN", "NUM", "ID", "ADD", "SUB", "MUL", "DIV", "PRTO", "PRTC",
  "SBTO", "SBTC", "SCL", "COM", "KEYO", "KEYC", "ATR", "LT", "LTE", "GT",
  "GTE", "EQ", "NEQ", "ERR", "$accept", "program", "declaration_list",
  "declaration", "var_declaration", "$@1", "$@2", "$@3", "type_specifier",
  "fun_declaration", "$@4", "compound_stmt", "statement_list", "statement",
  "expression_stmt", "selection_stmt", "selection_else_stmt",
  "iteration_stmt", "return_stmt", "expression", "var", "$@5", "$@6",
  "relop", "additive_expression", "adop", "term", "mulop", "factor", "$@7",
  "call", "$@8", "args", "arg_list", "simple_expression",
  "local_declarations", "params", "param_list", "param", "$@9", "erro", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
# endif

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -76

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      11,   -63,   -63,     4,    11,   -63,   -63,   -21,   -63,   -63,
     -63,   -63,    13,    36,    30,    38,    60,   -63,    67,    39,
     -63,    61,   -21,    63,    58,   -63,    64,    70,    65,    11,
      66,    71,   -63,   -63,   -63,   -63,    72,    11,    69,   -63,
     -21,     3,   -63,    73,    75,    76,    17,   -63,    22,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,    74,    77,    34,
     -63,    57,   -63,   -63,    82,    78,    22,    22,   -63,    79,
     -63,    68,   -63,    22,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,    22,    22,   -63,   -63,    22,    50,    80,    81,
     -63,   -63,   -63,   -63,    62,   -63,   -63,   -63,    84,    87,
      -2,    -2,    22,    20,    88,   -63,    85,   -63,    83,    86,
      -2,   -63,   -63,   -63,    22,   -63,   -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,     0,     2,     4,     5,    75,     6,     1,
       3,    74,     0,     7,     0,     0,     0,     8,     0,     0,
      10,    13,    75,     0,    67,    70,     0,     0,     0,     0,
       0,    71,    66,    15,    69,    11,     0,    18,     0,    65,
      75,    75,    73,     0,     0,     0,    75,    54,    75,    25,
      16,    21,    17,    19,    20,    22,    23,     0,    53,    64,
      45,    49,    56,    33,     0,     7,    75,    75,    30,     0,
      55,     0,    24,    75,    46,    47,    39,    38,    40,    41,
      42,    43,    75,    75,    50,    51,    75,    34,     0,     0,
      31,    52,    32,    53,    63,    44,    48,    35,     0,     0,
      75,    75,    75,    60,    28,    29,     0,    62,     0,    59,
      75,    26,    37,    58,    75,    27,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -63,   -63,   -63,   100,    44,   -63,   -63,   -63,    35,   -63,
     -63,    89,   -63,   -62,   -63,   -63,   -63,   -63,   -63,   -46,
     -42,   -63,   -63,   -63,    23,   -63,   -17,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,    90,   -63,
      -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    14,    15,    26,     7,     8,
      16,    51,    41,    52,    53,    54,   111,    55,    56,    57,
      58,    97,    98,    82,    59,    83,    60,    86,    61,    70,
      62,    99,   108,   109,    63,    37,    23,    24,    25,    36,
      64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      69,    12,    71,    44,     9,    45,    46,    47,    44,    11,
      45,    46,    47,    48,     1,     2,    27,    49,    48,    32,
      88,    89,    49,    13,    32,    50,    47,    92,    11,    47,
     -75,    47,    48,    11,    43,    48,    68,    48,   104,   105,
      93,    93,     1,    21,    93,    74,    75,    11,   115,    17,
      11,   -14,    11,    -9,    22,    18,   106,   107,    76,    77,
      78,    79,    80,    81,    22,   -57,    95,   -36,   116,    96,
      84,    85,    40,    74,    75,    19,    20,   -68,    29,    28,
      31,    39,    30,    65,    91,    35,    32,    42,   -72,    38,
      66,    67,    87,    72,   110,    -9,   100,   101,    90,   113,
      73,   102,   103,   112,    10,    94,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,    34
};

static const yytype_int8 yycheck[] =
{
      46,     7,    48,     5,     0,     7,     8,     9,     5,    30,
       7,     8,     9,    15,     3,     4,    22,    19,    15,    21,
      66,    67,    19,    10,    21,    22,     9,    73,    30,     9,
      10,     9,    15,    30,    40,    15,    19,    15,   100,   101,
      82,    83,     3,     4,    86,    11,    12,    30,   110,    19,
      30,    15,    30,    17,    19,    17,   102,   103,    24,    25,
      26,    27,    28,    29,    29,    15,    83,    17,   114,    86,
      13,    14,    37,    11,    12,    15,     9,    16,    20,    16,
      10,    37,    18,    10,    16,    19,    21,    18,    17,    17,
      15,    15,    10,    19,     6,    17,    16,    16,    19,    16,
      23,    17,    15,    18,     4,    82,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    32,    33,    34,    35,    39,    40,     0,
      34,    30,    71,    10,    36,    37,    41,    19,    17,    15,
       9,     4,    39,    67,    68,    69,    38,    71,    16,    20,
      18,    10,    21,    42,    69,    19,    70,    66,    17,    35,
      39,    43,    18,    71,     5,     7,     8,     9,    15,    19,
      22,    42,    44,    45,    46,    48,    49,    50,    51,    55,
      57,    59,    61,    65,    71,    10,    15,    15,    19,    50,
      60,    50,    19,    23,    11,    12,    24,    25,    26,    27,
      28,    29,    54,    56,    13,    14,    58,    10,    50,    50,
      19,    16,    50,    51,    55,    57,    57,    52,    53,    62,
      16,    16,    17,    15,    44,    44,    50,    50,    63,    64,
       6,    47,    18,    16,    20,    44,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    36,    35,    37,
      38,    35,    39,    39,    41,    40,    42,    43,    43,    44,
      44,    44,    44,    44,    45,    45,    46,    47,    47,    48,
      49,    49,    50,    50,    52,    51,    53,    51,    54,    54,
      54,    54,    54,    54,    55,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    59,    59,    62,    61,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    70,    69,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     0,     5,     0,
       0,     9,     1,     1,     0,     8,     4,     2,     0,     1,
       1,     1,     1,     1,     2,     1,     6,     2,     0,     5,
       2,     3,     3,     1,     0,     3,     0,     6,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     0,     2,     1,     0,     6,     1,
       0,     3,     1,     3,     1,     2,     0,     1,     1,     3,
       1,     3,     0,     6,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 48 "compilador.y"
    {
      savedTree = (treeNode *) malloc(sizeof(treeNode));
      savedTree->nodeKind = TypeK;
      savedTree->name = "int";
      savedTree->child[0] = (treeNode *) malloc(sizeof(treeNode));
      savedTree->child[1] = NULL;
      savedTree->child[2] = NULL;
      savedTree->child[0]->nodeKind = FnK;
      savedTree->child[0]->name = "input";
      for(int i = 0; i < 3; i ++)
        savedTree->child[0]->child[i] = NULL;
      savedTree->sibling = (treeNode *) malloc(sizeof(treeNode));
      savedTree->sibling->nodeKind = TypeK;
      savedTree->sibling->name = "output";
      savedTree->sibling->child[0] = (treeNode *) malloc(sizeof(treeNode));
      savedTree->sibling->child[1] = NULL;
      savedTree->sibling->child[2] = NULL;
      savedTree->sibling->child[0]->nodeKind = FnK;
      savedTree->sibling->child[0]->name = "output";
      for(int i = 0; i < 3; i ++)
        savedTree->sibling->child[0]->child[i] = NULL;
      savedTree->sibling->sibling = yyvsp[0];
    }
#line 1376 "compilador.tab.c"
    break;

  case 3:
#line 75 "compilador.y"
    {
      YYSTYPE t = yyvsp[-1];
      if(t!=NULL){
        while(t->sibling != NULL) t = t->sibling;
        t->sibling = yyvsp[0];
        yyval = yyvsp[-1];
      }else{
        yyval = yyvsp[0];
      }
    }
#line 1391 "compilador.tab.c"
    break;

  case 4:
#line 86 "compilador.y"
    {yyval = yyvsp[0];}
#line 1397 "compilador.tab.c"
    break;

  case 5:
#line 91 "compilador.y"
    {yyval = yyvsp[0];}
#line 1403 "compilador.tab.c"
    break;

  case 6:
#line 93 "compilador.y"
    {yyval  = yyvsp[0];}
#line 1409 "compilador.tab.c"
    break;

  case 7:
#line 97 "compilador.y"
    {savedIDs.push(copyString(currentToken));}
#line 1415 "compilador.tab.c"
    break;

  case 8:
#line 98 "compilador.y"
    {
      yyval = yyvsp[-4];
      yyval->child[0] = newNode(IdK);
      yyval->child[0]->name = savedIDs.top();
      if(currentFunction != " "){
        if(existID(savedIDs.top()," ")) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
        if(savedIDs.top().compare(currentFunction) == 0) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
        if(yyval->name=="int"){
          if(!insertSymTab(savedIDs.top(),VarType,currentFunction,Int,yylineno)) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
        }else {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno;; exit(-1);}
      }else{
        if(existIdEveryScope(savedIDs.top())) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
        insertSymTab(savedIDs.top(),VarType,currentFunction,Int,yylineno);
      }
      savedIDs.pop();
    }
#line 1436 "compilador.tab.c"
    break;

  case 9:
#line 114 "compilador.y"
    {savedIDs.push(copyString(currentToken));}
#line 1442 "compilador.tab.c"
    break;

  case 10:
#line 114 "compilador.y"
    {savedInt = atoi(copyString(currentToken));}
#line 1448 "compilador.tab.c"
    break;

  case 11:
#line 115 "compilador.y"
    {
      yyval = yyvsp[-8];
      yyval->child[0] = newNode(IdArrayK);
      yyval->child[0]->name = savedIDs.top();
      if(currentFunction != " "){
        if(existID(savedIDs.top()," ")) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
        if(savedIDs.top().compare(currentFunction) == 0) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
        if(yyval->name=="int"){
          if(!insertSymTab(savedIDs.top(),VarType,currentFunction,Int,yylineno)) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
        }else {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno;; exit(-1);}
      }else{
        if(existIdEveryScope(savedIDs.top())) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
        insertSymTab(savedIDs.top(),VarType,currentFunction,Int,yylineno);
      }
      savedIDs.pop();
      yyval->child[0]->child[0] = newNode(ConstK);
      yyval->child[0]->child[0]->val = savedInt;
    }
#line 1471 "compilador.tab.c"
    break;

  case 12:
#line 137 "compilador.y"
    {
      yyval = newNode(TypeK);
      yyval->name = "int";
    }
#line 1480 "compilador.tab.c"
    break;

  case 13:
#line 142 "compilador.y"
    {
      yyval = newNode(TypeK);
      yyval->name = "void";
    }
#line 1489 "compilador.tab.c"
    break;

  case 14:
#line 149 "compilador.y"
    {savedIDs.push(copyString(currentToken)); currentFunction = copyString(currentToken);}
#line 1495 "compilador.tab.c"
    break;

  case 15:
#line 149 "compilador.y"
    {
      if(existIdEveryScope(savedIDs.top())) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
      if(yyval->name=="int"){
        insertSymTab(savedIDs.top(),FuncType," ",Int,yylineno);
      }else {
        !insertSymTab(savedIDs.top(),FuncType," ",Void,yylineno);
      }
      yyval = yyvsp[-7];
      yyval->child[0] = newNode(FnK);
      yyval->child[0]->name = savedIDs.top();
      savedIDs.pop();
      yyval->child[0]->child[0] = yyvsp[-2];
      yyval->child[0]->child[1] = yyvsp[0];
      currentFunction = " ";
    }
#line 1515 "compilador.tab.c"
    break;

  case 16:
#line 167 "compilador.y"
    {
    yyval = yyvsp[-2];
    if(yyval==NULL){
      yyval = yyvsp[-1];
    }
    else{
      YYSTYPE t = yyval;
      while(t->sibling != NULL) t = t->sibling;
      t->sibling = yyvsp[-1];
    }
  }
#line 1531 "compilador.tab.c"
    break;

  case 17:
#line 181 "compilador.y"
    {
    YYSTYPE t = yyvsp[-1];
    if(t!=NULL){
      while(t->sibling != NULL) t = t->sibling;
      t->sibling = yyvsp[0];
      yyval = yyvsp[-1];
    }else{
      yyval = yyvsp[0];
    }
  }
#line 1546 "compilador.tab.c"
    break;

  case 18:
#line 191 "compilador.y"
    {
    yyval = NULL;
  }
#line 1554 "compilador.tab.c"
    break;

  case 19:
#line 197 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1562 "compilador.tab.c"
    break;

  case 20:
#line 200 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1570 "compilador.tab.c"
    break;

  case 21:
#line 203 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1578 "compilador.tab.c"
    break;

  case 22:
#line 206 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1586 "compilador.tab.c"
    break;

  case 23:
#line 209 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1594 "compilador.tab.c"
    break;

  case 24:
#line 215 "compilador.y"
    {
    yyval = yyvsp[-1];
  }
#line 1602 "compilador.tab.c"
    break;

  case 25:
#line 218 "compilador.y"
    {
    yyval = NULL;
  }
#line 1610 "compilador.tab.c"
    break;

  case 26:
#line 224 "compilador.y"
    {
    if(checkAtr(yyvsp[-3])) {cout <<"Erro semântico na atribuicao na linha " << yylineno; exit(-1);}
    yyval = newNode(CondK);
    yyval->name = "if";
    yyval->child[0] = yyvsp[-3];
    yyval->child[1] = yyvsp[-1];
    yyval->child[2] = yyvsp[0];
  }
#line 1623 "compilador.tab.c"
    break;

  case 27:
#line 235 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1631 "compilador.tab.c"
    break;

  case 28:
#line 238 "compilador.y"
    {
    yyval = NULL;
  }
#line 1639 "compilador.tab.c"
    break;

  case 29:
#line 245 "compilador.y"
    {
    if(checkAtr(yyvsp[-2])) {cout <<"Erro semântico na atribuicao na linha " << yylineno; exit(-1);}
    yyval = newNode(LoopK);
    yyval->name = "while";
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
  }
#line 1651 "compilador.tab.c"
    break;

  case 30:
#line 255 "compilador.y"
    {
    yyval = newNode(ReturnK);
    yyval->name = "return";
  }
#line 1660 "compilador.tab.c"
    break;

  case 31:
#line 259 "compilador.y"
    {
    yyval = newNode(ReturnK);
    yyval->child[0] = yyvsp[-1];
  }
#line 1669 "compilador.tab.c"
    break;

  case 32:
#line 266 "compilador.y"
    {
    if(checkVoid(yyvsp[0])) {cout <<"Erro semântico no ID: " << yyvsp[0]->name << " na linha " << yylineno; exit(-1);}
    yyval = newNode(OpK);
    yyval->name = "=";
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
  }
#line 1681 "compilador.tab.c"
    break;

  case 33:
#line 273 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1689 "compilador.tab.c"
    break;

  case 34:
#line 279 "compilador.y"
    {savedIDs.push(copyString(currentToken));}
#line 1695 "compilador.tab.c"
    break;

  case 35:
#line 279 "compilador.y"
    {
    if(!existID(savedIDs.top(),currentFunction)) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
    if(getTypeID(savedIDs.top(),currentFunction) != VarType) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
    yyval = newNode(IdK);
    yyval->name = savedIDs.top();
    insertLineID(savedIDs.top(), currentFunction, yylineno);
    savedIDs.pop();
  }
#line 1708 "compilador.tab.c"
    break;

  case 36:
#line 287 "compilador.y"
    {savedIDs.push(copyString(currentToken));}
#line 1714 "compilador.tab.c"
    break;

  case 37:
#line 287 "compilador.y"
    {
    if(!existID(savedIDs.top(),currentFunction)) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
    if(getTypeID(savedIDs.top(),currentFunction) != VarType) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
    if(checkAtr(yyvsp[-1])) {cout <<"Erro semântico na atribuicao na linha " << yylineno; exit(-1);}
    yyval = newNode(IdArrayK);
    yyval->name = savedIDs.top();
    insertLineID(savedIDs.top(), currentFunction, yylineno);
    savedIDs.pop();
    yyval->child[0] = yyvsp[-1];
  }
#line 1729 "compilador.tab.c"
    break;

  case 38:
#line 300 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = "<=";
  }
#line 1738 "compilador.tab.c"
    break;

  case 39:
#line 304 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = "<";
  }
#line 1747 "compilador.tab.c"
    break;

  case 40:
#line 308 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = ">";
  }
#line 1756 "compilador.tab.c"
    break;

  case 41:
#line 312 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = ">=";
  }
#line 1765 "compilador.tab.c"
    break;

  case 42:
#line 316 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = "==";
  }
#line 1774 "compilador.tab.c"
    break;

  case 43:
#line 320 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = "!=";
  }
#line 1783 "compilador.tab.c"
    break;

  case 44:
#line 327 "compilador.y"
    {
    if(checkVoid(yyvsp[0])) {cout <<"Erro semântico no ID: " << yyvsp[0]->name << " na linha " << yylineno; exit(-1);}
    yyval = yyvsp[-1];
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
  }
#line 1794 "compilador.tab.c"
    break;

  case 45:
#line 333 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1802 "compilador.tab.c"
    break;

  case 46:
#line 339 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = "+";
  }
#line 1811 "compilador.tab.c"
    break;

  case 47:
#line 343 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = "-";
  }
#line 1820 "compilador.tab.c"
    break;

  case 48:
#line 350 "compilador.y"
    {
    if(checkVoid(yyvsp[0])) {cout <<"Erro semântico no ID: " << yyvsp[0]->name << " na linha " << yylineno; exit(-1);}
    yyval = yyvsp[-1];
    yyval->child[0] = yyvsp[-2];
    yyval->child[1] = yyvsp[0];
  }
#line 1831 "compilador.tab.c"
    break;

  case 49:
#line 356 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1839 "compilador.tab.c"
    break;

  case 50:
#line 362 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = "*";
  }
#line 1848 "compilador.tab.c"
    break;

  case 51:
#line 366 "compilador.y"
    {
    yyval = newNode(OpK);
    yyval->name = "/";
  }
#line 1857 "compilador.tab.c"
    break;

  case 52:
#line 373 "compilador.y"
    {
    yyval = yyvsp[-1];
  }
#line 1865 "compilador.tab.c"
    break;

  case 53:
#line 376 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1873 "compilador.tab.c"
    break;

  case 54:
#line 379 "compilador.y"
    {savedInt = atoi(copyString(currentToken));}
#line 1879 "compilador.tab.c"
    break;

  case 55:
#line 379 "compilador.y"
    {
    yyval = newNode(ConstK);
    yyval->val = savedInt;
  }
#line 1888 "compilador.tab.c"
    break;

  case 56:
#line 383 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1896 "compilador.tab.c"
    break;

  case 57:
#line 389 "compilador.y"
    {savedIDs.push(copyString(currentToken));}
#line 1902 "compilador.tab.c"
    break;

  case 58:
#line 389 "compilador.y"
    {
    if(!existID(savedIDs.top()," ")) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
    yyval = newNode(CallK);
    yyval->name = savedIDs.top();
    insertLineIDGlobal(savedIDs.top(), yylineno);
    savedIDs.pop();
    yyval->child[0] = yyvsp[-1];
  }
#line 1915 "compilador.tab.c"
    break;

  case 59:
#line 400 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1923 "compilador.tab.c"
    break;

  case 60:
#line 403 "compilador.y"
    {
    yyval = NULL;
  }
#line 1931 "compilador.tab.c"
    break;

  case 61:
#line 409 "compilador.y"
    {
    YYSTYPE t = yyvsp[-2];
    if(t!=NULL){
      while(t->sibling != NULL) t = t->sibling;
      t->sibling = yyvsp[0];
      yyval = yyvsp[-2];
    }else{
      yyval = yyvsp[0];
    }
  }
#line 1946 "compilador.tab.c"
    break;

  case 62:
#line 419 "compilador.y"
    {
    if(checkVoid(yyvsp[0])) {cout <<"Erro semântico no ID: " << yyvsp[0]->name << " na linha " << yylineno; exit(-1);}
    yyval = yyvsp[0];
  }
#line 1955 "compilador.tab.c"
    break;

  case 63:
#line 426 "compilador.y"
    {
      yyval = yyvsp[-1];
      yyval->child[0] = yyvsp[-2];
      yyval->child[1] = yyvsp[0];
    }
#line 1965 "compilador.tab.c"
    break;

  case 64:
#line 431 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 1973 "compilador.tab.c"
    break;

  case 65:
#line 437 "compilador.y"
    {
    YYSTYPE t = yyvsp[-1];
    if(t!=NULL){
      while(t->sibling != NULL) t = t->sibling;
      t->sibling = yyvsp[0];
      yyval = yyvsp[-1];
    }else{
      yyval = yyvsp[0];
    }
  }
#line 1988 "compilador.tab.c"
    break;

  case 66:
#line 447 "compilador.y"
    {
    yyval = NULL;
  }
#line 1996 "compilador.tab.c"
    break;

  case 67:
#line 453 "compilador.y"
    {
        yyval = yyvsp[0];
      }
#line 2004 "compilador.tab.c"
    break;

  case 68:
#line 456 "compilador.y"
    {
        yyval = NULL;
      }
#line 2012 "compilador.tab.c"
    break;

  case 69:
#line 462 "compilador.y"
    {
    YYSTYPE t = yyvsp[-2];
    if(t!=NULL){
      while(t->sibling != NULL) t = t->sibling;
      t->sibling = yyvsp[0];
      yyval = yyvsp[-2];
    }else{
      yyval = yyvsp[0];
    }
  }
#line 2027 "compilador.tab.c"
    break;

  case 70:
#line 472 "compilador.y"
    {
    yyval = yyvsp[0];
  }
#line 2035 "compilador.tab.c"
    break;

  case 71:
#line 478 "compilador.y"
    {
    savedIDs.push(copyString(currentToken));
    if(existID(savedIDs.top()," ")) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno;; exit(-1);}
    if(yyval->name=="int"){
      if(!insertSymTab(savedIDs.top(),VarType,currentFunction,Int,yylineno)) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
    }else {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno;; exit(-1);}
    yyval = yyvsp[-2];
    yyval->child[0] = newNode(IdK);
    yyval->child[0]->name = savedIDs.top();
    savedIDs.pop();
  }
#line 2051 "compilador.tab.c"
    break;

  case 72:
#line 489 "compilador.y"
    {savedIDs.push(copyString(currentToken));}
#line 2057 "compilador.tab.c"
    break;

  case 73:
#line 489 "compilador.y"
    {
    if(existID(savedIDs.top()," ")) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno;; exit(-1);}
    if(yyval->name=="int"){
      if(!insertSymTab(savedIDs.top(),VarType,currentFunction,Int,yylineno)) {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno; exit(-1);}
    }else {cout <<"Erro semântico no ID: " << savedIDs.top() << " na linha " << yylineno;; exit(-1);}
    yyval = yyvsp[-5];
    yyval->child[0] = newNode(IdK);
    yyval->child[0]->name = savedIDs.top();
    savedIDs.pop();
  }
#line 2072 "compilador.tab.c"
    break;

  case 74:
#line 502 "compilador.y"
    {yyerror("lex error"); exit(-1);}
#line 2078 "compilador.tab.c"
    break;


#line 2082 "compilador.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 506 "compilador.y"


int main()
{
  cout << "\nParser em execução...\n";
  abrirArq();
  insertSymTab("input",FuncType," ",Int,0);
  insertSymTab("output",FuncType," ",Void,0);
  yyparse();
  if(!checkMain()) {cout <<"Nao foi declarada uma funcao main"; exit(-1);}

  showSymbTab();
  ofstream symbTabFile;
  symbTabFile.open("./outputs/symbTab");
  symbTabFile << symbTabString;
  symbTabFile.close();

  string threePreOrder = showTree(savedTree, false, 0);
  ofstream threePreOrderFile;
  threePreOrderFile.open("./outputs/threePreOrder");
  threePreOrderFile << threePreOrder;
  threePreOrderFile.close();

  codeGenerator(savedTree,0);
  ofstream threeAdressCodeFile;
  threeAdressCodeFile.open("./outputs/threeAdressCode");
  threeAdressCodeFile << threeAdressCode;
  threeAdressCodeFile.close();

  codeGeneratorQuad(savedTree, 0);
  ofstream quadCodeFile;
  quadCodeFile.open("./outputs/quadCode");
  quadCodeFile << quadCode;
  quadCodeFile.close();

  cout << "Parser executado" << endl;
  return 0;
}

void yyerror(char * msg)
{
  cout << msg << ": erro no token \"" << yytext << "\" na linha " << yylineno << endl;
}
