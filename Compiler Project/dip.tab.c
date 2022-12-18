
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "dip.y"
 //header functions	
	#include<stdio.h>
	#include<stdlib.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int yylex(void);
	void yyerror(char *s);
	
	
	int numberOfVars = 0;//number of variabls added
	

	
	struct DataType{
		int Type;
		char variableName[50];
		int intValue;
		float floatValue;
		char *stringValue;
	}arr_To_Store_Variables[100];
	

	
	int varSearch(char name[50]){//search for used name 
		int i;
		for(i=0; i<numberOfVars; i++){
			if(strcmp(arr_To_Store_Variables[i].variableName, name) == 0){
				return 1;
			}
		}
		return 0;
	}
	

	
	void setDataType(int type){//setting data_type
		int i;
		for(i=0; i<numberOfVars; i++){
			if(arr_To_Store_Variables[i].Type == -1){
				arr_To_Store_Variables[i].Type = type;
			}
		}
	}
	
// Search the index of any variable 
	
	int getVariableIndex(char name[50]){
		int i;
		for(i=0; i<numberOfVars; i++){
			if(strcmp(arr_To_Store_Variables[i].variableName, name) == 0){
				return i;
			}
		}
		return -1;
	}
	


/* Line 189 of yacc.c  */
#line 133 "dip.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     HERE = 258,
     Int = 259,
     Float = 260,
     Char = 261,
     Bool = 262,
     BEGINN = 263,
     END = 264,
     ID = 265,
     NUM = 266,
     ASSIGN = 267,
     CHARACTER = 268,
     ADD = 269,
     SUB = 270,
     MUL = 271,
     DIV = 272,
     POW = 273,
     EQL = 274,
     SHOW = 275,
     SIN = 276,
     COS = 277,
     TAN = 278,
     LOG10 = 279,
     LOG = 280,
     LorE = 281,
     GorE = 282,
     ELSEIF = 283,
     GREATER = 284,
     LESSER = 285,
     ELSE = 286,
     IF = 287,
     MINN = 288,
     MAX = 289,
     GCD = 290,
     FOR = 291,
     WHILE = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 60 "dip.y"

	int ival;
	double floatValue;
	char* stringValue;



/* Line 214 of yacc.c  */
#line 214 "dip.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 226 "dip.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   575

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,     2,     2,     2,     2,     2,
      40,    41,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    15,    18,    21,    24,
      27,    30,    33,    37,    39,    41,    43,    47,    49,    54,
      59,    61,    68,    75,    82,    89,    93,    97,   101,   105,
     109,   113,   117,   119,   121,   125,   127,   133,   135,   137,
     139,   141,   143,   145,   147,   149,   156,   163,   170,   175,
     180,   185,   190,   195,   203,   215,   234,   236,   243,   250,
     257,   264,   268,   278,   288,   298,   308,   318,   328
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,     3,     8,    46,     9,    -1,    -1,    47,
      46,    -1,    50,    46,    -1,    51,    46,    -1,    53,    46,
      -1,    54,    46,    -1,    63,    46,    -1,    65,    46,    -1,
      66,    46,    -1,    48,    49,    38,    -1,     4,    -1,     5,
      -1,     6,    -1,    49,    39,    10,    -1,    10,    -1,    10,
      12,    51,    38,    -1,    10,    12,    13,    38,    -1,    11,
      -1,    14,    40,    51,    39,    51,    41,    -1,    15,    40,
      51,    39,    51,    41,    -1,    16,    40,    51,    39,    51,
      41,    -1,    17,    40,    51,    39,    51,    41,    -1,    51,
      18,    51,    -1,    40,    51,    41,    -1,    51,    19,    51,
      -1,    51,    30,    51,    -1,    51,    29,    51,    -1,    51,
      27,    51,    -1,    51,    26,    51,    -1,    54,    -1,    52,
      -1,    40,    51,    41,    -1,    10,    -1,    20,    40,    10,
      41,    38,    -1,    58,    -1,    59,    -1,    60,    -1,    62,
      -1,    61,    -1,    55,    -1,    56,    -1,    57,    -1,    33,
      40,    51,    39,    51,    41,    -1,    34,    40,    51,    39,
      51,    41,    -1,    35,    40,    51,    39,    51,    41,    -1,
      21,    40,    51,    41,    -1,    22,    40,    51,    41,    -1,
      23,    40,    51,    41,    -1,    24,    40,    51,    41,    -1,
      25,    40,    51,    41,    -1,    32,    40,    51,    41,    42,
      64,    43,    -1,    32,    40,    51,    41,    42,    64,    43,
      31,    42,    64,    43,    -1,    32,    40,    51,    41,    42,
      64,    43,    28,    40,    51,    41,    42,    64,    43,    31,
      42,    64,    43,    -1,    11,    -1,    14,    40,    51,    39,
      51,    41,    -1,    15,    40,    51,    39,    51,    41,    -1,
      16,    40,    51,    39,    51,    41,    -1,    17,    40,    51,
      39,    51,    41,    -1,    51,    18,    51,    -1,    36,    40,
      11,    38,    11,    38,    11,    41,    38,    -1,    36,    40,
      10,    38,    11,    38,    11,    41,    38,    -1,    36,    40,
      10,    38,    10,    38,    11,    41,    38,    -1,    36,    40,
      10,    38,    10,    38,    10,    41,    38,    -1,    36,    40,
      11,    38,    10,    38,    10,    41,    38,    -1,    36,    40,
      11,    38,    11,    38,    10,    41,    38,    -1,    37,    40,
      51,    41,    42,    46,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    91,    96,    97,    98,   101,   113,   128,   145,
     157,   159,   161,   163,   165,   173,   174,   175,   176,   178,
     179,   181,   182,   183,   185,   186,   207,   222,   223,   224,
     225,   226,   227,   228,   229,   231,   242,   253,   273,   280,
     285,   292,   297,   303,   307,   314,   325,   327,   329,   331,
     333,   341,   344,   356,   369,   383,   398,   413,   428
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HERE", "Int", "Float", "Char", "Bool",
  "BEGINN", "END", "ID", "NUM", "ASSIGN", "CHARACTER", "ADD", "SUB", "MUL",
  "DIV", "POW", "EQL", "SHOW", "SIN", "COS", "TAN", "LOG10", "LOG", "LorE",
  "GorE", "ELSEIF", "GREATER", "LESSER", "ELSE", "IF", "MINN", "MAX",
  "GCD", "FOR", "WHILE", "'!'", "','", "'('", "')'", "'{'", "'}'",
  "$accept", "program", "statement", "declaration", "TYPE", "ID1",
  "assignment", "expression", "t", "print_code", "mathematics", "minFunct",
  "maxFunct", "GcdFunct", "sinFunct", "cosFunct", "tanFunct", "log10Funct",
  "logFunct", "ifCondition", "then", "for_code", "while_code", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    33,    44,
      40,    41,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    47,    48,    48,    48,    49,    49,    50,    50,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    53,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     1,     1,     1,     3,     1,     4,     4,
       1,     6,     6,     6,     6,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     1,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     6,     6,     4,     4,
       4,     4,     4,     7,    11,    18,     1,     6,     6,     6,
       6,     3,     9,     9,     9,     9,     9,     9,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,    13,    14,    15,    35,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       3,     3,    33,     3,    32,    42,    43,    44,    37,    38,
      39,    41,    40,     3,     3,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,    32,     2,     4,    17,     0,
       5,     0,     0,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    12,     0,    25,    27,    31,    30,    29,
      28,    19,    18,     0,     0,     0,     0,     0,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     3,    21,    22,    23,    24,    20,
       0,     0,     0,     0,     0,     0,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    64,    63,    66,
      67,    62,     0,     0,     0,     0,     0,     0,    21,    22,
      23,    24,     0,    54,     0,     0,     0,     0,     0,     0,
      55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    27,    28,    29,    69,    30,    31,    32,    33,
      65,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     155,    44,    45
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -133
static const yytype_int16 yypact[] =
{
       8,    -6,    15,    91,  -133,  -133,  -133,  -133,     7,  -133,
     -15,    -5,    -2,     1,     4,    11,    17,    31,    34,    37,
      41,    43,    69,    80,    94,    95,   248,   127,    91,   133,
      91,   220,  -133,    91,   180,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,    91,    91,    91,    45,   248,   248,   248,
     248,   135,   248,   248,   248,   248,   248,   248,   248,   248,
     248,    -1,   248,  -133,   103,  -133,  -133,  -133,  -133,   -25,
    -133,   248,   248,   248,   248,   248,   248,  -133,  -133,  -133,
    -133,  -133,  -133,    99,    46,   441,   455,   460,   474,   105,
     129,   192,   276,   293,   306,   311,   479,   493,   498,   111,
     112,   324,  -133,  -133,   141,   153,   153,   153,   153,   153,
     153,  -133,  -133,   248,   248,   248,   248,   114,  -133,  -133,
    -133,  -133,  -133,   115,   248,   248,   248,    81,    83,   118,
    -133,   330,   343,   348,   361,  -133,   275,   367,   380,   385,
     116,   123,   124,   125,    91,  -133,  -133,  -133,  -133,   130,
     134,   136,   137,   138,   249,   132,  -133,  -133,  -133,    93,
     170,   177,   108,   150,   248,   248,   248,   248,   248,   -23,
     157,   158,   165,   166,   167,   168,  -133,   512,   517,   531,
     536,   153,   187,   186,   191,   194,   210,   213,   223,   228,
     248,   248,   248,   248,   248,   275,  -133,  -133,  -133,  -133,
    -133,  -133,   398,   404,   417,   422,   435,   231,   234,   237,
     241,   244,   251,  -133,   275,   258,   273,   265,   275,   270,
    -133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,   -27,  -133,  -133,  -133,  -133,   -26,  -133,  -133,
       9,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -132,  -133,  -133
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -61
static const yytype_int16 yytable[] =
{
      64,    67,     3,    70,    77,   182,    78,    79,   183,    99,
     100,     1,    34,   103,   104,     4,    80,    81,    82,    46,
      84,    85,    86,    87,    88,    47,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    48,   101,    34,    49,    34,
      34,    50,    34,    34,    51,   105,   106,   107,   108,   109,
     110,    52,    34,    34,    34,    63,     9,    53,    83,    10,
      11,    12,    13,   207,    71,    72,    15,    16,    17,    18,
      19,    54,    73,    74,    55,    75,    76,    56,    21,    22,
      23,    57,   215,    58,   112,    26,   219,   131,   132,   133,
     134,   140,   141,   142,   143,     5,     6,     7,   137,   138,
     139,     8,     9,   170,   171,    10,    11,    12,    13,    59,
     154,    14,    15,    16,    17,    18,    19,   163,   174,   175,
      60,    71,    72,    20,    21,    22,    23,    24,    25,    73,
      74,    26,    75,    76,    61,    62,    66,   111,   177,   178,
     179,   180,   181,    68,   102,    89,   117,    71,    72,   127,
     128,   130,   135,    34,   159,    73,    74,   136,    75,    76,
     144,   160,   161,   162,   202,   203,   204,   205,   206,   154,
     118,    71,    72,   -56,   164,   169,   165,   166,   167,    73,
      74,   172,    75,    76,     5,     6,     7,   173,   154,    -3,
       8,     9,   154,   176,    10,    11,    12,    13,   184,   185,
      14,    15,    16,    17,    18,    19,   186,   187,   188,   189,
      71,    72,    20,    21,    22,    23,    24,    25,    73,    74,
      26,    75,    76,    -3,     5,     6,     7,   194,   195,   196,
       8,     9,   197,   119,    10,    11,    12,    13,    71,    72,
      14,    15,    16,    17,    18,    19,    73,    74,   198,    75,
      76,   199,    20,    21,    22,    23,    24,    25,    63,     9,
      26,   200,    10,    11,    12,    13,   201,   168,    72,    15,
      16,    17,    18,    19,   213,    73,    74,   -57,    75,    76,
     -58,    21,    22,    23,   -59,    63,   149,   -60,    26,   150,
     151,   152,   153,   214,    71,    72,    15,    16,    17,    18,
      19,   216,    73,    74,   217,    75,    76,   218,    21,    22,
      23,    71,    72,   220,     0,    26,     0,   120,     0,    73,
      74,     0,    75,    76,    71,    72,     0,     0,     0,    71,
      72,     0,    73,    74,   121,    75,    76,    73,    74,     0,
      75,    76,    71,    72,     0,     0,     0,   122,    71,    72,
      73,    74,   123,    75,    76,     0,    73,    74,     0,    75,
      76,    71,    72,     0,     0,   129,    71,    72,     0,    73,
      74,   145,    75,    76,    73,    74,     0,    75,    76,    71,
      72,     0,     0,     0,   146,    71,    72,    73,    74,   147,
      75,    76,     0,    73,    74,     0,    75,    76,    71,    72,
       0,     0,   148,    71,    72,     0,    73,    74,   156,    75,
      76,    73,    74,     0,    75,    76,    71,    72,     0,     0,
       0,   157,    71,    72,    73,    74,   158,    75,    76,     0,
      73,    74,     0,    75,    76,    71,    72,     0,     0,   208,
      71,    72,     0,    73,    74,   209,    75,    76,    73,    74,
       0,    75,    76,    71,    72,     0,     0,     0,   210,    71,
      72,    73,    74,   211,    75,    76,     0,    73,    74,     0,
      75,    76,     0,    71,    72,     0,   212,     0,    71,    72,
     113,    73,    74,     0,    75,    76,    73,    74,     0,    75,
      76,     0,    71,    72,   114,     0,     0,    71,    72,   115,
      73,    74,     0,    75,    76,    73,    74,     0,    75,    76,
       0,    71,    72,   116,     0,     0,    71,    72,   124,    73,
      74,     0,    75,    76,    73,    74,     0,    75,    76,     0,
      71,    72,   125,     0,     0,    71,    72,   126,    73,    74,
       0,    75,    76,    73,    74,     0,    75,    76,     0,    71,
      72,   190,     0,     0,    71,    72,   191,    73,    74,     0,
      75,    76,    73,    74,     0,    75,    76,     0,     0,     0,
     192,     0,     0,     0,     0,   193
};

static const yytype_int16 yycheck[] =
{
      26,    28,     8,    30,    31,    28,    33,    34,    31,    10,
      11,     3,     3,    38,    39,     0,    43,    44,    45,    12,
      46,    47,    48,    49,    50,    40,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    40,    62,    28,    40,    30,
      31,    40,    33,    34,    40,    71,    72,    73,    74,    75,
      76,    40,    43,    44,    45,    10,    11,    40,    13,    14,
      15,    16,    17,   195,    18,    19,    21,    22,    23,    24,
      25,    40,    26,    27,    40,    29,    30,    40,    33,    34,
      35,    40,   214,    40,    38,    40,   218,   113,   114,   115,
     116,    10,    11,    10,    11,     4,     5,     6,   124,   125,
     126,    10,    11,    10,    11,    14,    15,    16,    17,    40,
     136,    20,    21,    22,    23,    24,    25,   144,    10,    11,
      40,    18,    19,    32,    33,    34,    35,    36,    37,    26,
      27,    40,    29,    30,    40,    40,     9,    38,   164,   165,
     166,   167,   168,    10,    41,    10,    41,    18,    19,    38,
      38,    10,    38,   144,    38,    26,    27,    42,    29,    30,
      42,    38,    38,    38,   190,   191,   192,   193,   194,   195,
      41,    18,    19,    43,    40,    43,    40,    40,    40,    26,
      27,    11,    29,    30,     4,     5,     6,    10,   214,     9,
      10,    11,   218,    43,    14,    15,    16,    17,    41,    41,
      20,    21,    22,    23,    24,    25,    41,    41,    41,    41,
      18,    19,    32,    33,    34,    35,    36,    37,    26,    27,
      40,    29,    30,    43,     4,     5,     6,    40,    42,    38,
      10,    11,    38,    41,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    38,    29,
      30,    38,    32,    33,    34,    35,    36,    37,    10,    11,
      40,    38,    14,    15,    16,    17,    38,    18,    19,    21,
      22,    23,    24,    25,    43,    26,    27,    43,    29,    30,
      43,    33,    34,    35,    43,    10,    11,    43,    40,    14,
      15,    16,    17,    42,    18,    19,    21,    22,    23,    24,
      25,    43,    26,    27,    31,    29,    30,    42,    33,    34,
      35,    18,    19,    43,    -1,    40,    -1,    41,    -1,    26,
      27,    -1,    29,    30,    18,    19,    -1,    -1,    -1,    18,
      19,    -1,    26,    27,    41,    29,    30,    26,    27,    -1,
      29,    30,    18,    19,    -1,    -1,    -1,    41,    18,    19,
      26,    27,    41,    29,    30,    -1,    26,    27,    -1,    29,
      30,    18,    19,    -1,    -1,    41,    18,    19,    -1,    26,
      27,    41,    29,    30,    26,    27,    -1,    29,    30,    18,
      19,    -1,    -1,    -1,    41,    18,    19,    26,    27,    41,
      29,    30,    -1,    26,    27,    -1,    29,    30,    18,    19,
      -1,    -1,    41,    18,    19,    -1,    26,    27,    41,    29,
      30,    26,    27,    -1,    29,    30,    18,    19,    -1,    -1,
      -1,    41,    18,    19,    26,    27,    41,    29,    30,    -1,
      26,    27,    -1,    29,    30,    18,    19,    -1,    -1,    41,
      18,    19,    -1,    26,    27,    41,    29,    30,    26,    27,
      -1,    29,    30,    18,    19,    -1,    -1,    -1,    41,    18,
      19,    26,    27,    41,    29,    30,    -1,    26,    27,    -1,
      29,    30,    -1,    18,    19,    -1,    41,    -1,    18,    19,
      39,    26,    27,    -1,    29,    30,    26,    27,    -1,    29,
      30,    -1,    18,    19,    39,    -1,    -1,    18,    19,    39,
      26,    27,    -1,    29,    30,    26,    27,    -1,    29,    30,
      -1,    18,    19,    39,    -1,    -1,    18,    19,    39,    26,
      27,    -1,    29,    30,    26,    27,    -1,    29,    30,    -1,
      18,    19,    39,    -1,    -1,    18,    19,    39,    26,    27,
      -1,    29,    30,    26,    27,    -1,    29,    30,    -1,    18,
      19,    39,    -1,    -1,    18,    19,    39,    26,    27,    -1,
      29,    30,    26,    27,    -1,    29,    30,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,     8,     0,     4,     5,     6,    10,    11,
      14,    15,    16,    17,    20,    21,    22,    23,    24,    25,
      32,    33,    34,    35,    36,    37,    40,    46,    47,    48,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    65,    66,    12,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    10,    51,    54,     9,    46,    10,    49,
      46,    18,    19,    26,    27,    29,    30,    46,    46,    46,
      46,    46,    46,    13,    51,    51,    51,    51,    51,    10,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    10,
      11,    51,    41,    38,    39,    51,    51,    51,    51,    51,
      51,    38,    38,    39,    39,    39,    39,    41,    41,    41,
      41,    41,    41,    41,    39,    39,    39,    38,    38,    41,
      10,    51,    51,    51,    51,    38,    42,    51,    51,    51,
      10,    11,    10,    11,    42,    41,    41,    41,    41,    11,
      14,    15,    16,    17,    51,    64,    41,    41,    41,    38,
      38,    38,    38,    46,    40,    40,    40,    40,    18,    43,
      10,    11,    11,    10,    10,    11,    43,    51,    51,    51,
      51,    51,    28,    31,    41,    41,    41,    41,    41,    41,
      39,    39,    39,    39,    40,    42,    38,    38,    38,    38,
      38,    38,    51,    51,    51,    51,    51,    64,    41,    41,
      41,    41,    41,    43,    42,    64,    43,    31,    42,    64,
      43
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 76 "dip.y"
    {printf("\nValid statement\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 91 "dip.y"
    {
    setDataType((yyvsp[(1) - (3)].floatValue));

;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 96 "dip.y"
    {(yyval.floatValue) = 1; printf("\nTyp:- INT\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 97 "dip.y"
    {(yyval.floatValue) = 2; printf("\nTyp:- FLAOT\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 98 "dip.y"
    {(yyval.floatValue) = 3; printf("\nTyp:- CHAR\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 101 "dip.y"
    {
	if(varSearch((yyvsp[(3) - (3)].stringValue))==0){
		printf("\nValid declaration\n");
		strcpy(arr_To_Store_Variables[numberOfVars].variableName, (yyvsp[(3) - (3)].stringValue));
		printf("\nVariable name: %s", (yyvsp[(3) - (3)].stringValue));
		arr_To_Store_Variables[numberOfVars].Type =  -1;
		numberOfVars = numberOfVars + 1;
	}
	else{
		printf("\nVariable is already used");
	}
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 113 "dip.y"
    {
	if(varSearch((yyvsp[(1) - (1)].stringValue))==0){
		printf("\nValid declaration\n");
		strcpy(arr_To_Store_Variables[numberOfVars].variableName, (yyvsp[(1) - (1)].stringValue));
		printf("\nVariable name: %s", (yyvsp[(1) - (1)].stringValue));
		arr_To_Store_Variables[numberOfVars].Type =  -1;
		numberOfVars = numberOfVars + 1;
	}
	else{
		printf("\nVariable is already used\n");
	}
	strcpy((yyval.stringValue), (yyvsp[(1) - (1)].stringValue));
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 128 "dip.y"
    {
	(yyval.floatValue) = (yyvsp[(3) - (4)].floatValue);
	if(varSearch((yyvsp[(1) - (4)].stringValue))==1){
		int i = getVariableIndex((yyvsp[(1) - (4)].stringValue));
		if(arr_To_Store_Variables[i].Type==1){
			arr_To_Store_Variables[i].intValue = (yyvsp[(3) - (4)].floatValue);
			printf("\nVariable value: %d (INT)", arr_To_Store_Variables[i].intValue);
		}
		else if(arr_To_Store_Variables[i].Type==2){
			arr_To_Store_Variables[i].floatValue = (float)(yyvsp[(3) - (4)].floatValue);
			printf("\nVariable value: %f (FLOAT)", arr_To_Store_Variables[i].floatValue);
		}
	}
	else{
		printf("\nVariable is not declared\n");
	}
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 145 "dip.y"
    {
		//$$ = $3;
	    if(varSearch((yyvsp[(1) - (4)].stringValue))==1){
		int i = getVariableIndex((yyvsp[(1) - (4)].stringValue));
		if(arr_To_Store_Variables[i].Type==3){
			arr_To_Store_Variables[i].stringValue = (yyvsp[(3) - (4)].stringValue);
			printf("\nVariable value: %s (CHAR)", arr_To_Store_Variables[i].stringValue);
			}
		}
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 157 "dip.y"
    { (yyval.floatValue) = (yyvsp[(1) - (1)].floatValue); 	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 159 "dip.y"
    {(yyval.floatValue) = (yyvsp[(3) - (6)].floatValue) + (yyvsp[(5) - (6)].floatValue);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 161 "dip.y"
    { (yyval.floatValue) = (yyvsp[(3) - (6)].floatValue) - (yyvsp[(5) - (6)].floatValue); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 163 "dip.y"
    { (yyval.floatValue) = (yyvsp[(3) - (6)].floatValue) * (yyvsp[(5) - (6)].floatValue); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 165 "dip.y"
    { if((yyvsp[(5) - (6)].floatValue)){
				     					(yyval.floatValue) = (yyvsp[(3) - (6)].floatValue) / (yyvsp[(5) - (6)].floatValue);
				  					}
				  					else{
										(yyval.floatValue) = 0;
										printf("\ndivision by zero error\t");
				  					} 	
				    			;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 173 "dip.y"
    { (yyval.floatValue) = pow((yyvsp[(1) - (3)].floatValue) , (yyvsp[(3) - (3)].floatValue));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 174 "dip.y"
    { (yyval.floatValue) = (yyvsp[(2) - (3)].floatValue);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 175 "dip.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) == (yyvsp[(3) - (3)].floatValue); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 176 "dip.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) < (yyvsp[(3) - (3)].floatValue); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 178 "dip.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) > (yyvsp[(3) - (3)].floatValue); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 179 "dip.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) >= (yyvsp[(3) - (3)].floatValue); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 181 "dip.y"
    { (yyval.floatValue) = (yyvsp[(1) - (3)].floatValue) <= (yyvsp[(3) - (3)].floatValue); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 183 "dip.y"
    {(yyval.floatValue)=(yyvsp[(1) - (1)].floatValue);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 185 "dip.y"
    {(yyval.floatValue) = (yyvsp[(2) - (3)].floatValue);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 186 "dip.y"
    { 
	int index = getVariableIndex((yyvsp[(1) - (1)].stringValue));
	if(index == -1)
	{
		yyerror("VARIABLE DOESN'T EXIST\n");
	}
	else
	{
		
		if(arr_To_Store_Variables[index].Type == 1)
		{
			(yyval.floatValue) = arr_To_Store_Variables[index].intValue;
		}
		else if(arr_To_Store_Variables[index].Type == 2)
		{
			(yyval.floatValue) = arr_To_Store_Variables[index].floatValue;
		}
	}
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 207 "dip.y"
    {
	int i = getVariableIndex((yyvsp[(3) - (5)].stringValue));
	if(arr_To_Store_Variables[i].Type == 1){
		printf("\nVariable name:---> %s, Value:---> %d\n\n", arr_To_Store_Variables[i].variableName, arr_To_Store_Variables[i].intValue);
	}
	else if(arr_To_Store_Variables[i].Type == 2){
		printf("\nVariable name:---> %s, Value:---> %f\n\n", arr_To_Store_Variables[i].variableName, arr_To_Store_Variables[i].floatValue);
	}
	else{
		printf("\nVariable name:---> %s, Value:---> %s\n\n", arr_To_Store_Variables[i].variableName, arr_To_Store_Variables[i].stringValue); 	}
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 231 "dip.y"
    {
        if((yyvsp[(3) - (6)].floatValue)>(yyvsp[(5) - (6)].floatValue))
        {
            (yyval.floatValue) = (yyvsp[(5) - (6)].floatValue);
        }
        else
        {
            (yyval.floatValue) = (yyvsp[(3) - (6)].floatValue);
        }
        printf("%d\n",(yyval.floatValue));
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 242 "dip.y"
    {
        if((yyvsp[(3) - (6)].floatValue)>(yyvsp[(5) - (6)].floatValue))
        {
            (yyval.floatValue) = (yyvsp[(3) - (6)].floatValue);
        }
        else
        {
            (yyval.floatValue) = (yyvsp[(5) - (6)].floatValue);
        }
       
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 253 "dip.y"
    {
       int c;
       int a = (yyvsp[(3) - (6)].floatValue);
       int b = (yyvsp[(5) - (6)].floatValue);
       if(a>b)
       {
           int temp = a;
           a=b;
           b=a;
       }
       while(a!=0)
       {
           int temp = b%a;
           b=a;
           a=temp;
       }
       (yyval.floatValue) = b;
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 273 "dip.y"
    {
	printf("\nValue of Sin(%lf) is %lf\n\n",(yyvsp[(3) - (4)].floatValue),sin((yyvsp[(3) - (4)].floatValue)*3.1416/180)); 
	(yyval.floatValue)=sin((yyvsp[(3) - (4)].floatValue)*3.1416/180);
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 280 "dip.y"
    {
	printf("\nValue of Cos(%lf) is %lf\n\n",(yyvsp[(3) - (4)].floatValue),cos((yyvsp[(3) - (4)].floatValue)*3.1416/180)); 
	(yyval.floatValue)=cos((yyvsp[(3) - (4)].floatValue)*3.1416/180);
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 285 "dip.y"
    {
	printf("\nValue of Tan(%lf) is %lf\n\n",(yyvsp[(3) - (4)].floatValue),tan((yyvsp[(3) - (4)].floatValue)*3.1416/180)); 
	(yyval.floatValue)=tan((yyvsp[(3) - (4)].floatValue)*3.1416/180);
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 292 "dip.y"
    {
	printf("Value of Log10(%lf) is %lf\n\n",(yyvsp[(3) - (4)].floatValue),(log((yyvsp[(3) - (4)].floatValue)*1.0)/log(10.0))); 
	(yyval.floatValue)=(log((yyvsp[(3) - (4)].floatValue)*1.0)/log(10.0));
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 297 "dip.y"
    {
	printf("Value of Log(%lf) is %lf\n\n",(yyvsp[(3) - (4)].floatValue),(log((yyvsp[(3) - (4)].floatValue)))); 
	(yyval.floatValue)=(log((yyvsp[(3) - (4)].floatValue)));
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 303 "dip.y"
    {
			if((yyvsp[(3) - (7)].floatValue)==1)
			printf("%d \n",(int)(yyvsp[(6) - (7)].floatValue));
			;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 307 "dip.y"
    {
			if((yyvsp[(3) - (11)].floatValue)==1)
			printf("%d \n",(int)(yyvsp[(6) - (11)].floatValue));
			
			else
			printf("%d \n",(int)(yyvsp[(10) - (11)].floatValue));
			;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 314 "dip.y"
    {
			if((yyvsp[(3) - (18)].floatValue)==1)
			printf("%d \n",(int)(yyvsp[(6) - (18)].floatValue));
			
			else if((yyvsp[(10) - (18)].floatValue)==1)
			printf("%d \n",(int)(yyvsp[(13) - (18)].floatValue));

			else
			printf("%d \n",(int)(yyvsp[(17) - (18)].floatValue));
			;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 325 "dip.y"
    { (yyval.floatValue) = (yyvsp[(1) - (1)].floatValue); 	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 327 "dip.y"
    {(yyval.floatValue) = (yyvsp[(3) - (6)].floatValue) + (yyvsp[(5) - (6)].floatValue);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 329 "dip.y"
    { (yyval.floatValue) = (yyvsp[(3) - (6)].floatValue) - (yyvsp[(5) - (6)].floatValue); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 331 "dip.y"
    { (yyval.floatValue) = (yyvsp[(3) - (6)].floatValue) * (yyvsp[(5) - (6)].floatValue); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 333 "dip.y"
    { if((yyvsp[(5) - (6)].floatValue)){
				     					(yyval.floatValue) = (yyvsp[(3) - (6)].floatValue) / (yyvsp[(5) - (6)].floatValue);
				  					}
				  					else{
										(yyval.floatValue) = 0;
										printf("\ndivision by zero error\t");
				  					} 	
				    			;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 341 "dip.y"
    { (yyval.floatValue) = pow((yyvsp[(1) - (3)].floatValue) , (yyvsp[(3) - (3)].floatValue));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 344 "dip.y"
    {
	printf("\nFor loop\n");
	int i = (yyvsp[(3) - (9)].floatValue);
	int j = (yyvsp[(5) - (9)].floatValue);
	int inc = (yyvsp[(7) - (9)].floatValue);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 356 "dip.y"
    {
	printf("\nFor loop\n");
	int idex = getVariableIndex((yyvsp[(3) - (9)].stringValue));
	int i = arr_To_Store_Variables[idex].intValue;
	int j = (yyvsp[(5) - (9)].floatValue);
	int inc = (yyvsp[(7) - (9)].floatValue);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 369 "dip.y"
    {
	printf("\nFor loop\n");
	int idex = getVariableIndex((yyvsp[(3) - (9)].stringValue));
	int i = arr_To_Store_Variables[idex].intValue;
	idex = getVariableIndex((yyvsp[(5) - (9)].stringValue));
	int j = arr_To_Store_Variables[idex].intValue;
	int inc = (yyvsp[(7) - (9)].floatValue);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 383 "dip.y"
    {
	printf("\nFor loop\n");
	int idex = getVariableIndex((yyvsp[(3) - (9)].stringValue));
	int i = arr_To_Store_Variables[idex].intValue;
	idex = getVariableIndex((yyvsp[(5) - (9)].stringValue));
	int j = arr_To_Store_Variables[idex].intValue;
	idex = getVariableIndex((yyvsp[(7) - (9)].stringValue));
	int inc = arr_To_Store_Variables[idex].intValue;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 398 "dip.y"
    {
	printf("\nFor loop\n");	
	int i = (yyvsp[(3) - (9)].floatValue);
	int idex = getVariableIndex((yyvsp[(5) - (9)].stringValue));
	int j = arr_To_Store_Variables[idex].intValue;
	idex = getVariableIndex((yyvsp[(7) - (9)].stringValue));
	int inc = arr_To_Store_Variables[idex].intValue;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 413 "dip.y"
    {
	printf("\nFor loop\n");
	int i = (yyvsp[(3) - (9)].floatValue);
	int j = (yyvsp[(5) - (9)].floatValue);
	int idex = getVariableIndex((yyvsp[(7) - (9)].stringValue));
	int inc = arr_To_Store_Variables[idex].intValue;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 428 "dip.y"
    {
	printf("\nWhile Loop\n");
	
	
	;}
    break;



/* Line 1455 of yacc.c  */
#line 2244 "dip.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 435 "dip.y"


void yyerror(char *s)
{
	fprintf(stderr, "\n%s", s);
}

int main(){
	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	yyparse();
	return 0;
}
