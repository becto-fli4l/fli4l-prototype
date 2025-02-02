/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 25 "libmkfli4l/grammar.y" /* yacc.c:339  */

#include "libmkfli4l/tree.h"
#include "libmkfli4l/tree_struct.h"
#include "libmkfli4l/str.h"
#include "libmkfli4l/log.h"
#include "libmkfli4l/parse.h"

int yyerror(char const *s);
int yylex(void);
extern int yyline;
extern char *yytext;


#line 80 "libmkfli4l/grammar.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar.h".  */
#ifndef YY_YY_LIBMKFLI4L_GRAMMAR_H_INCLUDED
# define YY_YY_LIBMKFLI4L_GRAMMAR_H_INCLUDED
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
    ID = 258,
    IDSET = 259,
    NUM = 260,
    STRING = 261,
    CHAR = 262,
    VER = 263,
    IF = 264,
    THEN = 265,
    ELSE = 266,
    FOREACH = 267,
    WARNING = 268,
    ERROR = 269,
    FATAL_ERROR = 270,
    FGREP = 271,
    STAT = 272,
    CRYPT = 273,
    SPLIT = 274,
    NUMERIC = 275,
    SET = 276,
    ADD_TO_OPT = 277,
    PROVIDES = 278,
    DEPENDS = 279,
    VERSION = 280,
    UNKNOWN = 281,
    FI = 282,
    IN = 283,
    DO = 284,
    DONE = 285,
    ON = 286,
    SAMENET = 287,
    SUBNET = 288,
    ASSIGN = 289,
    ORELSE = 290,
    AND = 291,
    OR = 292,
    ADD = 293,
    SUB = 294,
    MULT = 295,
    DIV = 296,
    MOD = 297,
    EQUAL = 298,
    NOT_EQUAL = 299,
    LESS = 300,
    GREATER = 301,
    LE = 302,
    GE = 303,
    MATCH = 304,
    NOT = 305,
    COPY_PENDING = 306,
    DEFINED = 307,
    UNIQUE = 308,
    CAST = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "libmkfli4l/grammar.y" /* yacc.c:355  */

    int line;
    elem_t *elem;

#line 180 "libmkfli4l/grammar.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LIBMKFLI4L_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "libmkfli4l/grammar.c" /* yacc.c:358  */

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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      55,    57,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    86,    86,    88,    89,    92,    93,    94,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   115,   116,   119,   120,   123,   126,   127,
     130,   131,   134,   135,   138,   139,   140,   141,   142,   143,
     146,   147,   150,   151,   154,   155,   156,   157,   158,   159,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "IDSET", "NUM", "STRING", "CHAR",
  "VER", "IF", "THEN", "ELSE", "FOREACH", "WARNING", "ERROR",
  "FATAL_ERROR", "FGREP", "STAT", "CRYPT", "SPLIT", "NUMERIC", "SET",
  "ADD_TO_OPT", "PROVIDES", "DEPENDS", "VERSION", "UNKNOWN", "FI", "IN",
  "DO", "DONE", "ON", "SAMENET", "SUBNET", "ASSIGN", "ORELSE", "AND", "OR",
  "ADD", "SUB", "MULT", "DIV", "MOD", "EQUAL", "NOT_EQUAL", "LESS",
  "GREATER", "LE", "GE", "MATCH", "NOT", "COPY_PENDING", "DEFINED",
  "UNIQUE", "CAST", "'('", "','", "')'", "'['", "']'", "$accept", "lang",
  "input", "line", "statement", "versionlist", "depend", "provides",
  "if_statement", "foreach_statement", "idset_set", "idset", "id", "index",
  "val", "num_expr", "condition", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    40,    44,    41,    91,    93
};
# endif

#define YYPACT_NINF -71

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-71)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     178,    17,    24,     7,    23,    27,    -9,    -4,    11,    16,
      77,    57,    86,    60,   103,   178,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,    52,   -71,   -71,   -71,    67,    85,    17,
      87,   101,   111,    17,   114,   -18,   -71,   160,    95,     8,
     170,   -71,   -71,   -71,   176,   182,   141,   141,   184,   164,
     215,   198,   221,   -71,   -71,    54,   219,   220,   -71,   135,
     141,   141,    89,    37,   206,    32,   222,    32,    32,    32,
      32,    32,    32,     6,    38,    38,    38,    38,    38,    12,
     178,    17,    17,   144,   171,   173,   174,   177,    32,   212,
     -71,   224,   205,   175,   179,    92,   180,   181,   183,   185,
     186,   187,   -71,   -71,   188,   189,   154,    38,   200,   191,
     -71,   191,   191,   191,   191,   191,   191,   -71,   -71,   -71,
     192,   192,   192,   192,   192,   -71,   -71,   146,   -71,   -71,
     210,   -71,    10,   235,   246,   -71,   247,   191,   193,   -71,
     242,   -71,   -71,   -71,   248,   249,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,    89,   178,   -71,   178,   -71,   178,   196,
     199,   201,   225,   242,   -71,   203,   204,   162,    83,   102,
     -71,   -71,   251,    32,   -71,   -71,   -71,   -71,   -71,   -71,
     163,   191,   243,   -71,   207,   -71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     5,    21,    22,
       6,     7,    40,     0,    43,    46,    44,     0,     0,     0,
       0,     0,     0,     0,    41,    42,    50,    59,    45,     0,
       0,     8,     9,    10,     0,     0,     0,     0,    18,     0,
      11,     0,     0,     1,     4,     0,     0,     0,    67,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    76,     0,     0,     0,     0,    42,    47,
      66,    60,    61,    62,    63,    64,    65,    48,    49,    42,
      52,    54,    53,    55,    56,    57,    58,     0,    74,    75,
       0,    33,     0,     0,     0,    15,     0,    19,     0,    27,
       0,    34,    36,    35,     0,     0,    69,    68,    73,    70,
      37,    39,    38,     0,     0,    28,     0,    32,     0,     0,
       0,     0,     0,    23,    26,     0,     0,     0,     0,     0,
      13,    14,     0,     0,    24,    71,    72,    29,    31,    30,
       0,    20,     0,    16,     0,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   -70,   -15,   -71,    99,   -71,   -71,   -71,   -71,
     -71,   -36,     1,   190,   -64,   -22,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,   164,    18,    19,    20,    21,
     132,    34,   108,    36,    37,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      54,   109,    35,   111,   112,   113,   114,   115,   116,   117,
     127,    62,    58,    41,   157,   125,    63,    65,    80,    95,
      22,    23,    24,    25,   137,    26,   118,    40,   106,    42,
      35,    66,   126,    43,    35,    22,    23,    24,    25,   158,
      26,    22,    23,    24,    81,    82,    44,    86,    87,    27,
      28,    45,   120,   121,   122,   123,   124,    93,    23,    94,
      99,   100,   101,    50,   128,   129,    46,    29,    30,    31,
      32,    47,    33,    81,    82,   119,   119,   119,   119,   119,
      48,    49,    35,    35,   167,   153,   168,   107,   169,    51,
     119,    52,     1,   107,   103,     2,     3,     4,     5,     6,
       7,     8,     9,    53,    10,    11,    12,    13,   119,   181,
      55,     1,    54,   178,     2,     3,     4,     5,     6,     7,
       8,     9,    56,    10,    11,    12,    13,    74,    75,    76,
      77,    78,   179,    74,    75,    76,    77,    78,    22,    23,
      57,    98,    59,    79,    22,    23,   102,   130,   131,    79,
      64,   143,    54,    54,    54,     1,    60,   154,     2,     3,
       4,     5,     6,     7,     8,     9,    61,    10,    11,    12,
      13,     1,    64,   155,     2,     3,     4,     5,     6,     7,
       8,     9,    84,    10,    11,    12,    13,     1,    85,   177,
       2,     3,     4,     5,     6,     7,     8,     9,    83,    10,
      11,    12,    13,    67,    68,    69,    70,    71,    72,   104,
      23,   105,    64,   152,    73,    22,    23,    24,    88,   182,
     183,    90,    89,    91,    92,    96,    97,   133,   110,   134,
     140,   135,   139,   136,   141,    65,   144,   145,   142,   156,
     146,   159,   147,   148,   149,    73,    79,   150,   151,   160,
     163,   161,   162,   170,   165,   166,   171,   172,   180,   173,
     175,   176,   174,   184,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138
};

static const yytype_int16 yycheck[] =
{
      15,    65,     1,    67,    68,    69,    70,    71,    72,     3,
      80,    33,    29,     6,     4,     3,    33,    35,    10,    55,
       3,     4,     5,     6,    88,     8,    20,     3,    64,     6,
      29,    49,    20,     6,    33,     3,     4,     5,     6,    29,
       8,     3,     4,     5,    36,    37,    55,    46,    47,    32,
      33,    55,    74,    75,    76,    77,    78,     3,     4,     5,
      59,    60,    61,     6,    81,    82,    55,    50,    51,    52,
      53,    55,    55,    36,    37,    74,    75,    76,    77,    78,
       3,     4,    81,    82,   154,   107,   156,    55,   158,     3,
      89,    31,     9,    55,    57,    12,    13,    14,    15,    16,
      17,    18,    19,     0,    21,    22,    23,    24,   107,   173,
      58,     9,   127,    30,    12,    13,    14,    15,    16,    17,
      18,    19,    55,    21,    22,    23,    24,    38,    39,    40,
      41,    42,    30,    38,    39,    40,    41,    42,     3,     4,
      55,     6,    55,    54,     3,     4,    57,     3,     4,    54,
      58,    59,   167,   168,   169,     9,    55,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    55,    21,    22,    23,
      24,     9,    58,    27,    12,    13,    14,    15,    16,    17,
      18,    19,     6,    21,    22,    23,    24,     9,     6,    27,
      12,    13,    14,    15,    16,    17,    18,    19,    28,    21,
      22,    23,    24,    43,    44,    45,    46,    47,    48,     3,
       4,     5,    58,    59,    54,     3,     4,     5,    34,    56,
      57,     6,    58,    25,     3,     6,     6,    56,     6,    56,
      25,    57,     8,    56,    59,    35,    56,    56,    59,    29,
      57,     6,    57,    57,    57,    54,    54,    59,    59,     3,
       8,     4,    59,    57,     6,     6,    57,    56,     7,    34,
      57,    57,   163,    20,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    12,    13,    14,    15,    16,    17,    18,    19,
      21,    22,    23,    24,    61,    62,    63,    64,    66,    67,
      68,    69,     3,     4,     5,     6,     8,    32,    33,    50,
      51,    52,    53,    55,    71,    72,    73,    74,    75,    76,
       3,     6,     6,     6,    55,    55,    55,    55,     3,     4,
       6,     3,    31,     0,    63,    58,    55,    55,    76,    55,
      55,    55,    75,    76,    58,    35,    49,    43,    44,    45,
      46,    47,    48,    54,    38,    39,    40,    41,    42,    54,
      10,    36,    37,    28,     6,     6,    72,    72,    34,    58,
       6,    25,     3,     3,     5,    71,     6,     6,     6,    72,
      72,    72,    57,    57,     3,     5,    71,    55,    72,    74,
       6,    74,    74,    74,    74,    74,    74,     3,    20,    72,
      75,    75,    75,    75,    75,     3,    20,    62,    76,    76,
       3,     4,    70,    56,    56,    57,    56,    74,    73,     8,
      25,    59,    59,    59,    56,    56,    57,    57,    57,    57,
      59,    59,    59,    75,    11,    27,    29,     4,    29,     6,
       3,     4,    59,     8,    65,     6,     6,    62,    62,    62,
      57,    57,    56,    34,    65,    57,    57,    27,    30,    30,
       7,    74,    56,    57,    20,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    66,    66,    67,    68,    68,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     3,     6,     6,     4,     8,    10,     2,     4,
       7,     1,     1,     1,     2,     3,     5,     4,     5,     7,
       7,     7,     2,     1,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     4,
       4,     6,     6,     4,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
                  (unsigned long) yystacksize));

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
| yyreduce -- Do a reduction.  |
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
#line 86 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { add_script((yyvsp[0].elem)); }
#line 1413 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 3:
#line 88 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = (yyvsp[0].elem); }
#line 1419 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 4:
#line 89 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = add_node((yyvsp[-1].elem), (yyvsp[0].elem)); }
#line 1425 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 8:
#line 97 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(WARNING, (yyvsp[0].elem), NULL, NULL, (yyvsp[-1].line)); }
#line 1431 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 9:
#line 98 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(ERROR, (yyvsp[0].elem), NULL, NULL, (yyvsp[-1].line)); }
#line 1437 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 10:
#line 99 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(FATAL_ERROR, (yyvsp[0].elem), NULL, NULL, (yyvsp[-1].line)); }
#line 1443 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 11:
#line 100 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(ADD_TO_OPT, (yyvsp[0].elem), NULL, NULL, (yyvsp[-1].line)); }
#line 1449 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 12:
#line 101 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(ADD_TO_OPT, (yyvsp[-1].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].line)); }
#line 1455 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 13:
#line 102 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(FGREP, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-5].line)); }
#line 1461 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 14:
#line 103 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(STAT, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-5].line)); }
#line 1467 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 15:
#line 104 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(CRYPT, (yyvsp[-1].elem), NULL, NULL, (yyvsp[-3].line)); }
#line 1473 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 16:
#line 105 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(SPLIT, (yyvsp[-5].elem), (yyvsp[-3].elem), (yyvsp[-1].elem),(yyvsp[-7].line)); }
#line 1479 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 17:
#line 106 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(SPLIT | SPLIT_NUMERIC, (yyvsp[-7].elem), (yyvsp[-5].elem), (yyvsp[-3].elem), (yyvsp[-9].line)); }
#line 1485 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 18:
#line 107 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(ASSIGN, (yyvsp[0].elem), NULL, NULL,(yyvsp[-1].line)); }
#line 1491 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 19:
#line 108 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(ASSIGN, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-3].line)); }
#line 1497 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 20:
#line 109 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(ASSIGN, (yyvsp[-5].elem), (yyvsp[-3].elem), (yyvsp[0].elem), (yyvsp[-6].line)); }
#line 1503 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 23:
#line 115 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(VER, (yyvsp[0].elem), NULL, NULL, (yyvsp[0].elem)->line); }
#line 1509 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 24:
#line 116 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(VER, (yyvsp[-1].elem), (yyvsp[0].elem), NULL, (yyvsp[-1].elem)->line); }
#line 1515 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 25:
#line 119 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(DEPENDS, (yyvsp[0].elem), NULL, NULL, (yyvsp[-2].line));}
#line 1521 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 26:
#line 120 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(DEPENDS, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-4].line));}
#line 1527 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 27:
#line 123 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(PROVIDES, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-3].line));}
#line 1533 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 28:
#line 126 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IF, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-4].line));}
#line 1539 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 29:
#line 127 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IF, (yyvsp[-5].elem),(yyvsp[-3].elem), (yyvsp[-1].elem), (yyvsp[-6].line));}
#line 1545 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 30:
#line 130 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(FOREACH, (yyvsp[-5].elem), (yyvsp[-3].elem), (yyvsp[-1].elem), (yyvsp[-6].line));}
#line 1551 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 31:
#line 131 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(FOREACH, (yyvsp[-5].elem), (yyvsp[-3].elem), (yyvsp[-1].elem), (yyvsp[-6].line));}
#line 1557 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 32:
#line 134 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IDSET, (yyvsp[0].elem), NULL, (yyvsp[-1].elem),   (yyvsp[0].elem)->line);}
#line 1563 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 33:
#line 135 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IDSET, (yyvsp[0].elem), NULL, NULL, (yyvsp[0].elem)->line);}
#line 1569 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 34:
#line 138 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IDSET, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-3].elem)->line); }
#line 1575 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 35:
#line 139 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IDSET, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-3].elem)->line); }
#line 1581 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 36:
#line 140 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IDSET, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-3].elem)->line); }
#line 1587 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 37:
#line 141 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IDSET, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-3].elem)->line); }
#line 1593 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 38:
#line 142 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IDSET, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-3].elem)->line); }
#line 1599 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 39:
#line 143 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(IDSET, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, (yyvsp[-3].elem)->line); }
#line 1605 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 47:
#line 157 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(ORELSE, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].elem)->line);}
#line 1611 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 48:
#line 158 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(CAST, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].elem)->line);}
#line 1617 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 49:
#line 159 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(CAST, (yyvsp[-2].elem), mkleaf(ID, "NUMERIC"), NULL, (yyvsp[-2].elem)->line);}
#line 1623 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 51:
#line 163 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = (yyvsp[-1].elem);}
#line 1629 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 52:
#line 164 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(ADD, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].elem)->line);}
#line 1635 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 53:
#line 165 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(MULT, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].elem)->line);}
#line 1641 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 54:
#line 166 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(SUB, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].elem)->line);}
#line 1647 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 55:
#line 167 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(DIV, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].elem)->line);}
#line 1653 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 56:
#line 168 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(MOD, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].elem)->line);}
#line 1659 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 57:
#line 169 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(CAST, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, (yyvsp[-2].elem)->line);}
#line 1665 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 58:
#line 170 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(CAST, (yyvsp[-2].elem), mkleaf(ID, "NUMERIC"), NULL, (yyvsp[-2].elem)->line);}
#line 1671 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 59:
#line 173 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = (yyvsp[0].elem); }
#line 1677 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 60:
#line 174 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(EQUAL, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, -1);}
#line 1683 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 61:
#line 175 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(NOT_EQUAL, (yyvsp[-2].elem), (yyvsp[0].elem),NULL, -1);}
#line 1689 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 62:
#line 176 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(LESS, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, -1); }
#line 1695 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 63:
#line 177 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(GREATER, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, -1);}
#line 1701 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 64:
#line 178 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(LE, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, -1);   }
#line 1707 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 65:
#line 179 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(GE, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, -1);   }
#line 1713 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 66:
#line 180 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(MATCH, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, -1);}
#line 1719 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 67:
#line 181 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(NOT, (yyvsp[0].elem), NULL, NULL, -1);}
#line 1725 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 68:
#line 182 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(COPY_PENDING, (yyvsp[-1].elem),NULL, NULL, -1);}
#line 1731 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 69:
#line 183 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(COPY_PENDING, (yyvsp[-1].elem),NULL, NULL, -1);}
#line 1737 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 70:
#line 184 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(UNIQUE, (yyvsp[-1].elem),NULL, NULL, -1);}
#line 1743 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 71:
#line 185 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(SAMENET, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, -1);}
#line 1749 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 72:
#line 186 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(SUBNET, (yyvsp[-3].elem), (yyvsp[-1].elem), NULL, -1);}
#line 1755 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 73:
#line 187 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(DEFINED, (yyvsp[-1].elem),NULL, NULL, -1);}
#line 1761 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 74:
#line 188 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(AND, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, -1);}
#line 1767 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 75:
#line 189 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = mknode(OR, (yyvsp[-2].elem), (yyvsp[0].elem), NULL, -1);}
#line 1773 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;

  case 76:
#line 190 "libmkfli4l/grammar.y" /* yacc.c:1651  */
    { (yyval.elem) = (yyvsp[-1].elem);                              }
#line 1779 "libmkfli4l/grammar.c" /* yacc.c:1651  */
    break;


#line 1783 "libmkfli4l/grammar.c" /* yacc.c:1651  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 192 "libmkfli4l/grammar.y" /* yacc.c:1910  */


int
yyerror(char const *s)  /* Called by yyparse on error */
{
    char const *p = yytext;

    printf ("(%s:%d) %s (last token: '", parse_get_current_file(), yyline, s);
    while (*p) {
        printf("%s", log_get_printable(*p));
        ++p;
    }
    printf("')\n");
    return 0;
}
