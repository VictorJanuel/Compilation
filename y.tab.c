/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
    #include "util/tables.h"
    extern int numligne;
    extern char * yytext;
    extern int yylex();
    extern int yyerror();
    extern int assoc_nom(int n);
    extern int yylval;
    extern file f;
    int nb_dimensions=0;
    int numchamps=0;
    int nb_params =0;
    arbre ab;

#line 84 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    PROG = 258,
    POINT_VIRGULE = 259,
    DEBUT = 260,
    FIN = 261,
    TYPE = 262,
    IDF = 263,
    DEUX_POINTS = 264,
    STRUCT = 265,
    FSTRUCT = 266,
    TABLEAU = 267,
    DE = 268,
    CROCHET_OUVRANT = 269,
    CROCHET_FERMANT = 270,
    VIRGULE = 271,
    POINT = 272,
    VARIABLE = 273,
    PROCEDURE = 274,
    FONCTION = 275,
    PP = 276,
    ENTIER = 277,
    REEL = 278,
    BOOLEEN = 279,
    CHAINE = 280,
    CARACTERE = 281,
    CSTE_ENTIERE = 282,
    CSTE_REELLE = 283,
    CARAC = 284,
    CHAINECARAC = 285,
    PARENTHESE_FERMANTE = 286,
    PARENTHESE_OUVRANTE = 287,
    VIDE = 288,
    RETOURNE = 289,
    SI = 290,
    ALORS = 291,
    SINON = 292,
    TANT_QUE = 293,
    FAIRE = 294,
    OPAFF = 295,
    OPEG = 296,
    OPINF = 297,
    OPSUP = 298,
    OPINFE = 299,
    OPSUPE = 300,
    OPDIFF = 301,
    NEG = 302,
    POS = 303,
    NOT = 304,
    PLUS = 305,
    MOINS = 306,
    MULT = 307,
    DIV = 308,
    MOD = 309,
    ET = 310,
    OU = 311,
    TRUE = 312,
    FALSE = 313,
    ERROR_LEXICO = 314
  };
#endif
/* Tokens.  */
#define PROG 258
#define POINT_VIRGULE 259
#define DEBUT 260
#define FIN 261
#define TYPE 262
#define IDF 263
#define DEUX_POINTS 264
#define STRUCT 265
#define FSTRUCT 266
#define TABLEAU 267
#define DE 268
#define CROCHET_OUVRANT 269
#define CROCHET_FERMANT 270
#define VIRGULE 271
#define POINT 272
#define VARIABLE 273
#define PROCEDURE 274
#define FONCTION 275
#define PP 276
#define ENTIER 277
#define REEL 278
#define BOOLEEN 279
#define CHAINE 280
#define CARACTERE 281
#define CSTE_ENTIERE 282
#define CSTE_REELLE 283
#define CARAC 284
#define CHAINECARAC 285
#define PARENTHESE_FERMANTE 286
#define PARENTHESE_OUVRANTE 287
#define VIDE 288
#define RETOURNE 289
#define SI 290
#define ALORS 291
#define SINON 292
#define TANT_QUE 293
#define FAIRE 294
#define OPAFF 295
#define OPEG 296
#define OPINF 297
#define OPSUP 298
#define OPINFE 299
#define OPSUPE 300
#define OPDIFF 301
#define NEG 302
#define POS 303
#define NOT 304
#define PLUS 305
#define MOINS 306
#define MULT 307
#define DIV 308
#define MOD 309
#define ET 310
#define OU 311
#define TRUE 312
#define FALSE 313
#define ERROR_LEXICO 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 253 "y.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
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

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    51,    70,    74,    75,    78,    79,    82,
      83,    86,   105,   106,   109,   110,   113,   119,   120,   123,
     126,   127,   130,   133,   134,   137,   140,   141,   144,   145,
     146,   147,   148,   151,   154,   157,   160,   161,   164,   165,
     168,   171,   172,   173,   174,   175,   176,   179,   180,   183,
     202,   203,   206,   207,   210,   213,   232,   251,   280,   281,
     282,   283,   286,   287,   291,   292,   295,   312,   329,   332,
     339,   346,   349,   350,   351,   354,   355,   356,   357,   358,
     359,   362,   363,   366,   367,   370,   371,   374,   375,   376,
     377,   380,   381,   382,   383,   384,   385
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROG", "POINT_VIRGULE", "DEBUT", "FIN",
  "TYPE", "IDF", "DEUX_POINTS", "STRUCT", "FSTRUCT", "TABLEAU", "DE",
  "CROCHET_OUVRANT", "CROCHET_FERMANT", "VIRGULE", "POINT", "VARIABLE",
  "PROCEDURE", "FONCTION", "PP", "ENTIER", "REEL", "BOOLEEN", "CHAINE",
  "CARACTERE", "CSTE_ENTIERE", "CSTE_REELLE", "CARAC", "CHAINECARAC",
  "PARENTHESE_FERMANTE", "PARENTHESE_OUVRANTE", "VIDE", "RETOURNE", "SI",
  "ALORS", "SINON", "TANT_QUE", "FAIRE", "OPAFF", "OPEG", "OPINF", "OPSUP",
  "OPINFE", "OPSUPE", "OPDIFF", "NEG", "POS", "NOT", "PLUS", "MOINS",
  "MULT", "DIV", "MOD", "ET", "OU", "TRUE", "FALSE", "ERROR_LEXICO",
  "$accept", "programme", "corps", "liste_declarations",
  "liste_declarations_type", "liste_declarations_variable",
  "liste_declarations_pf", "liste_instructions", "suite_liste_inst",
  "declaration_pf", "declaration_type", "suite_declaration_type",
  "dimension", "liste_dimensions", "une_dimension", "liste_champs",
  "un_champ", "nom_type", "type_simple", "declaration_variable",
  "declaration_procedure", "declaration_fonction", "liste_parametres",
  "liste_param", "un_param", "instruction", "resultat_retourne", "appel",
  "liste_arguments", "liste_args", "un_arg", "condition", "tant_que",
  "affectation", "variable", "vtab", "expression", "ea1", "ea2", "ea3",
  "ea4", "eb1", "eb2", "eb3", "eb4", "comparaison", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -59

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,  -151,    18,  -151,    22,    60,  -151,    55,  -151,    51,
      73,    90,    83,  -151,     4,     4,     4,    79,   100,  -151,
    -151,  -151,  -151,    76,   102,    98,    88,   132,  -151,    15,
     133,     4,  -151,     5,    69,  -151,  -151,  -151,  -151,     4,
      52,    97,    97,  -151,  -151,  -151,  -151,  -151,   113,    46,
    -151,  -151,   106,   112,  -151,  -151,  -151,   113,   -32,   -30,
    -151,   168,  -151,     4,    36,   164,   166,   167,   172,  -151,
    -151,  -151,    15,   -12,  -151,    -3,  -151,  -151,    15,   133,
      89,   -21,  -151,  -151,  -151,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,     4,     4,    22,    22,  -151,
    -151,   169,   165,  -151,   120,   146,   146,  -151,    87,  -151,
       4,  -151,   -10,  -151,  -151,  -151,    71,    71,    71,    71,
      71,    71,    46,    46,  -151,  -151,   112,  -151,   143,  -151,
     173,    66,  -151,    15,   170,  -151,  -151,  -151,  -151,   171,
    -151,  -151,  -151,   176,  -151,   147,  -151,  -151,    22,   120,
     169,  -151,   145,  -151,     0,   120,   159,   178,    26,  -151,
    -151,   125,  -151,  -151,  -151,  -151,    15,    15,  -151,   174,
     125,   176,  -151,  -151,  -151,    71,  -151,  -151,  -151,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     0,     2,     0,     8,     1,     0,     3,     0,
      10,     0,    50,    45,    47,     0,     0,     0,     0,    44,
      42,    43,    41,     0,     0,     0,     4,     0,     5,     0,
       0,     0,    49,    59,    58,    77,    78,    79,    80,     0,
       0,     0,     0,    88,    89,    46,    76,    48,    64,    68,
      71,    74,    65,    82,    84,    86,    90,     0,     0,     0,
      11,     0,    12,     0,     0,     0,     0,     0,     0,    14,
      15,     7,     0,     0,    60,     0,    52,    54,     0,     0,
       0,     0,    85,    73,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      57,     0,     0,    16,     0,    36,    36,     9,     0,    63,
       0,    51,     0,    61,    75,    87,    91,    92,    93,    94,
      95,    96,    66,    67,    69,    70,    81,    83,     0,    56,
       0,     0,    23,     0,     0,    27,    28,    29,    30,     0,
      31,    33,    26,     0,     6,     0,    53,    62,     0,     0,
       0,    17,     0,    20,     0,     0,     0,     0,     0,    38,
      34,     0,    55,    25,    24,    19,     0,     0,    18,     0,
       0,     0,    37,     6,    21,    22,    32,    40,    39,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -136,  -151,  -151,  -151,  -151,   -96,  -151,  -151,
    -151,  -151,  -151,  -151,    24,  -151,    38,   -54,  -150,  -151,
    -151,  -151,    85,  -151,    21,   177,  -151,  -151,  -151,  -151,
      86,  -151,  -151,  -151,    -1,  -151,    -7,   -14,    74,    75,
     129,    53,   103,    99,   153,  -151
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    10,    26,     8,    17,    68,
      11,   103,   134,   152,   153,   131,   132,   141,   142,    27,
      69,    70,   144,   158,   159,    18,    45,    19,    32,    75,
      76,    20,    21,    22,    46,    33,    77,    57,    49,    50,
      51,    52,    53,    54,    55,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   128,   129,   109,    97,   147,    23,    47,   160,    98,
     115,   173,    34,   110,     1,    73,    23,    48,     6,    78,
     177,   167,    79,    34,    95,    80,    95,     7,   111,    74,
     171,    35,    36,    37,    38,    95,    39,   179,    91,    92,
      91,    92,    35,    36,    37,    38,   101,    72,   102,    48,
      91,    92,   162,    40,    41,    42,   100,   172,   108,    24,
      34,    43,    44,    12,   112,    41,    42,     9,    58,    59,
     150,   116,   117,   118,   119,   120,   121,   151,   113,    35,
      36,    37,    38,    29,    39,    60,    30,    12,    13,    14,
      15,    25,    81,    16,    28,   163,    48,    29,    93,    94,
      30,   168,    41,    42,    62,    34,    65,    66,    67,    43,
      44,    64,    13,    14,    15,    31,    63,    16,   114,   154,
     114,    91,    92,   -58,    35,    36,    37,    38,   135,    72,
      85,    86,    87,    88,    89,    90,    71,    91,    92,    91,
      92,    34,   136,   137,   138,   139,   140,   136,   137,   138,
     139,   140,   154,   175,    85,    86,    87,    88,    89,    90,
     165,   166,    95,    91,    92,   122,   123,    96,   124,   125,
      83,    84,    99,   104,   105,   106,   107,   130,   143,   133,
     148,   161,   149,   155,   157,   156,   169,   170,   164,   176,
     174,   145,   178,    82,    61,   127,   146,     0,   126
};

static const yytype_int16 yycheck[] =
{
      14,    97,    98,    15,    36,    15,     7,    14,   144,    39,
      31,   161,     8,    16,     3,    29,    17,    31,     0,    14,
     170,    21,    17,     8,    56,    39,    56,     5,    31,    30,
       4,    27,    28,    29,    30,    56,    32,   173,    50,    51,
      50,    51,    27,    28,    29,    30,    10,    32,    12,    63,
      50,    51,   148,    49,    50,    51,    63,    31,    72,     8,
       8,    57,    58,     8,    78,    50,    51,     7,    15,    16,
       4,    85,    86,    87,    88,    89,    90,    11,    79,    27,
      28,    29,    30,    14,    32,     6,    17,     8,    33,    34,
      35,    18,    39,    38,     4,   149,   110,    14,    52,    53,
      17,   155,    50,    51,     4,     8,     8,    19,    20,    57,
      58,     9,    33,    34,    35,    32,    40,    38,    31,   133,
      31,    50,    51,    40,    27,    28,    29,    30,     8,    32,
      41,    42,    43,    44,    45,    46,     4,    50,    51,    50,
      51,     8,    22,    23,    24,    25,    26,    22,    23,    24,
      25,    26,   166,   167,    41,    42,    43,    44,    45,    46,
      15,    16,    56,    50,    51,    91,    92,    55,    93,    94,
      41,    42,     4,     9,     8,     8,     4,     8,    32,    14,
      37,    34,     9,    13,     8,    14,    27,     9,   150,    15,
     166,   106,   171,    40,    17,    96,   110,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    61,    62,    63,    64,     0,     5,    67,     7,
      65,    70,     8,    33,    34,    35,    38,    68,    85,    87,
      91,    92,    93,    94,     8,    18,    66,    79,     4,    14,
      17,    32,    88,    95,     8,    27,    28,    29,    30,    32,
      49,    50,    51,    57,    58,    86,    94,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    97,   101,   101,
       6,    85,     4,    40,     9,     8,    19,    20,    69,    80,
      81,     4,    32,    97,    94,    89,    90,    96,    14,    17,
      97,   101,   104,   100,   100,    41,    42,    43,    44,    45,
      46,    50,    51,    52,    53,    56,    55,    36,    39,     4,
      96,    10,    12,    71,     9,     8,     8,     4,    97,    15,
      16,    31,    97,    94,    31,    31,    97,    97,    97,    97,
      97,    97,    98,    98,    99,    99,   102,   103,    67,    67,
       8,    75,    76,    14,    72,     8,    22,    23,    24,    25,
      26,    77,    78,    32,    82,    82,    90,    15,    37,     9,
       4,    11,    73,    74,    97,    13,    14,     8,    83,    84,
      62,    34,    67,    77,    76,    15,    16,    21,    77,    27,
       9,     4,    31,    78,    74,    97,    15,    78,    84,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    63,    64,    64,    65,    65,    66,
      66,    67,    68,    68,    69,    69,    70,    71,    71,    72,
      73,    73,    74,    75,    75,    76,    77,    77,    78,    78,
      78,    78,    78,    79,    80,    81,    82,    82,    83,    83,
      84,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      88,    88,    89,    89,    90,    91,    92,    93,    94,    94,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    98,
      98,    98,    99,    99,    99,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   105,   105,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     0,     3,     0,     3,
       0,     3,     2,     3,     1,     1,     4,     3,     4,     3,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     6,     0,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     2,     0,     1,     2,
       0,     3,     1,     3,     1,     6,     4,     3,     1,     2,
       3,     4,     4,     3,     1,     1,     3,     3,     1,     3,
       3,     1,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     2,     1,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3
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
  unsigned long int yylno = yyrline[yyrule];
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
#line 33 "yacc.y" /* yacc.c:1646  */
    {
                                arbre ag = creer_arbre_vide();
                                arbre ad = creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                a = creer_arbre(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad);}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 51 "yacc.y" /* yacc.c:1646  */
    {p=depiler(p);
                                arbre ag = creer_arbre_vide();
                                arbre ad = creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 86 "yacc.y" /* yacc.c:1646  */
    {
                                arbre ag = creer_arbre_vide();
                                arbre ad = creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_LISTE, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "yacc.y" /* yacc.c:1646  */
    {
                              if((yyvsp[0])==0){insererDeclaration((yyvsp[-2]),N_STRUCT, numchamps);numchamps=0;}
                              else{insererDeclaration((yyvsp[-2]),N_TAB, nb_dimensions);nb_dimensions=0; }
                            }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 119 "yacc.y" /* yacc.c:1646  */
    {(yyval)=0;}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "yacc.y" /* yacc.c:1646  */
    {(yyval)=1;f=enfiler(f, (yyvsp[0]));}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 130 "yacc.y" /* yacc.c:1646  */
    {nb_dimensions++;;f=enfiler(f,(yyvsp[-2])); f=enfiler(f,(yyvsp[0]));}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 137 "yacc.y" /* yacc.c:1646  */
    {numchamps++; f=enfiler(f,(yyvsp[0])); f=enfiler(f, (yyvsp[-2]));}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 140 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 141 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 144 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 145 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 146 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 147 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 151 "yacc.y" /* yacc.c:1646  */
    {insererDeclaration((yyvsp[-2]),N_VAR, numchamps);}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 154 "yacc.y" /* yacc.c:1646  */
    {insererDeclaration((yyvsp[-2]),N_PROC, (yyvsp[-1]));}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 157 "yacc.y" /* yacc.c:1646  */
    {f=enfiler(f,(yyvsp[-1])); insererDeclaration((yyvsp[-4]),N_FONC,(yyvsp[-3]));}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 161 "yacc.y" /* yacc.c:1646  */
    {(yyval)=nb_params; nb_params=0;}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 168 "yacc.y" /* yacc.c:1646  */
    {nb_params++; f=enfiler(f, (yyvsp[0])); f=enfiler(f,(yyvsp[-2]));}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 183 "yacc.y" /* yacc.c:1646  */
    {
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    arbre ag=creer_noeud(A_APPEL, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_APPEL, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_APPEL, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 213 "yacc.y" /* yacc.c:1646  */
    {
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_IF, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_IF, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_IF, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 232 "yacc.y" /* yacc.c:1646  */
    {
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_WHILE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_WHILE, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                arbre ab = creer_arbre(A_WHILE, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 251 "yacc.y" /* yacc.c:1646  */
    {
    printf("OLOL\n");
                                arbre ag=creer_arbre_vide();
                                  printf("OLOL2\n");
                                arbre ad=creer_arbre_vide();
                                  printf("OLOL3\n");
                                if(!a_est_pile_vide(p_arbre)){
                                      printf("OLOL IF\n");
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                      printf("OLOL else\n");
                                    ag=creer_noeud(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    printf("OLOL IF2\n");
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    printf("OLOL else 2\n");
                                    ad=creer_noeud(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                printf("OLOL end\n");
                                ab = creer_arbre(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                printf("OLOL ARBRE OK\n");
                                p_arbre=a_empiler(p_arbre, ab);printf("OVER & OUT\n");
                                }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 280 "yacc.y" /* yacc.c:1646  */
    {printf("???? $1 :: %d\n", (yyvsp[0]));ab = creer_arbre_vide();printf("toto\n"); ab=creer_noeud(A_IDF, (yyvsp[0]), assoc_nom((yyvsp[0])));printf("J'empile\n"); p_arbre=a_empiler(p_arbre, ab);}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 295 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]) + (yyvsp[-1]);
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=creer_noeud(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=creer_noeud(A_AFFECT, A_EMPTY_LEX, A_EMPTY_DEC);
                                }
                                ab = creer_arbre(A_PLUS, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 312 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]) + (yyvsp[-1]);
                                arbre ag=creer_arbre_vide();
                                arbre ad=creer_arbre_vide();
                                if(!a_est_pile_vide(p_arbre)){                           
                                    ag=a_sommet(p_arbre); 
                                    p_arbre=a_depiler(p_arbre);
                                }else{
                                    ag=a_sommet(p_arbre);
                                }
                                if(!a_est_pile_vide(p_arbre)){
                                    ad=a_sommet(p_arbre); 
                                    p_arbre = a_depiler(p_arbre);
                                }else{
                                    ad=a_sommet(p_arbre);                                   
                                }
                                ab = creer_arbre(A_MOINS, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 329 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 332 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]) * (yyvsp[-1]);
                                arbre ag=a_sommet(p_arbre); 
                                p_arbre=a_depiler(p_arbre);
                                arbre ad=a_sommet(p_arbre); 
                                p_arbre = a_depiler(p_arbre);
                                ab = creer_arbre(A_MULT, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 339 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])/(yyvsp[-1]);
                                arbre ag=a_sommet(p_arbre); 
                                p_arbre=a_depiler(p_arbre);
                                arbre ad=a_sommet(p_arbre); 
                                p_arbre = a_depiler(p_arbre);
                                ab = creer_arbre(A_DIV, A_EMPTY_LEX, A_EMPTY_DEC, ag, ad); 
                                p_arbre=a_empiler(p_arbre, ab);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 346 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 349 "yacc.y" /* yacc.c:1646  */
    {(yyval)=-1*(yyvsp[0]);/*** OBSOLETE ***/}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 350 "yacc.y" /* yacc.c:1646  */
    {(yyval)=1*(yyvsp[0]);/*** OBSOLETE ***/ }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 351 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 354 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 355 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 356 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); printf("avconst\n");ab = creer_noeud(A_CSTE_E, A_EMPTY_LEX, A_EMPTY_DEC); printf("const\n");p_arbre=a_empiler(p_arbre, ab);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 357 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); ab = creer_noeud(A_CSTE_R, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 358 "yacc.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); ab = creer_noeud(A_CSTE_C, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 359 "yacc.y" /* yacc.c:1646  */
    {ab = creer_noeud(A_CSTE_S, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 375 "yacc.y" /* yacc.c:1646  */
    {ab = creer_noeud(A_TRUE, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 376 "yacc.y" /* yacc.c:1646  */
    {ab = creer_noeud(A_FALSE, A_EMPTY_LEX, A_EMPTY_DEC); p_arbre=a_empiler(p_arbre, ab);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1883 "y.tab.c" /* yacc.c:1646  */
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
#line 387 "yacc.y" /* yacc.c:1906  */


int yyerror(){
    printf("erreur ligne %d\n", numligne);
}

