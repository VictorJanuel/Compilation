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
<<<<<<< HEAD
#line 1 "grammaire.y" /* yacc.c:339  */



#line 70 "y.tab.c" /* yacc.c:339  */
=======
#line 1 "yacc.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
    extern int numligne;
    extern char * yytext;
    
    extern int yylex();
    extern int yyerror();
    extern int yylval;

#line 78 "y.tab.c" /* yacc.c:339  */
>>>>>>> dev

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
<<<<<<< HEAD
    ENTIER = 276,
    REEL = 277,
    BOOLEEN = 278,
    CHAINE = 279,
    CARACTERE = 280,
    CSTE_ENTIERE = 281,
    PARENTHESE_FERMANTE = 282,
    PARENTHESE_OUVRANTE = 283,
    VIDE = 284,
    RETOURNE = 285,
    SI = 286,
    ALORS = 287,
    SINON = 288,
    TANT_QUE = 289,
    FAIRE = 290,
    OPAFF = 291,
    OPEG = 292,
    OPINF = 293,
    OPSUP = 294,
    OPINFE = 295,
    OPSUPE = 296,
    OPDIFF = 297,
    NEG = 298,
    POS = 299,
    NOT = 300,
    PLUS = 301,
    MOINS = 302,
    MULT = 303,
    DIV = 304,
    MOD = 305,
    ET = 306,
    OU = 307,
    TRUE = 308,
    FALSE = 309
=======
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
>>>>>>> dev
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
<<<<<<< HEAD
#define ENTIER 276
#define REEL 277
#define BOOLEEN 278
#define CHAINE 279
#define CARACTERE 280
#define CSTE_ENTIERE 281
#define PARENTHESE_FERMANTE 282
#define PARENTHESE_OUVRANTE 283
#define VIDE 284
#define RETOURNE 285
#define SI 286
#define ALORS 287
#define SINON 288
#define TANT_QUE 289
#define FAIRE 290
#define OPAFF 291
#define OPEG 292
#define OPINF 293
#define OPSUP 294
#define OPINFE 295
#define OPSUPE 296
#define OPDIFF 297
#define NEG 298
#define POS 299
#define NOT 300
#define PLUS 301
#define MOINS 302
#define MULT 303
#define DIV 304
#define MOD 305
#define ET 306
#define OU 307
#define TRUE 308
#define FALSE 309
=======
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
>>>>>>> dev

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

<<<<<<< HEAD
#line 229 "y.tab.c" /* yacc.c:358  */
=======
#line 247 "y.tab.c" /* yacc.c:358  */
>>>>>>> dev

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172
=======
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178
>>>>>>> dev

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
<<<<<<< HEAD
#define YYMAXUTOK   309
=======
#define YYMAXUTOK   314
>>>>>>> dev

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
<<<<<<< HEAD
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
=======
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
>>>>>>> dev
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
<<<<<<< HEAD
       0,    18,    18,    21,    22,    25,    26,    29,    32,    33,
      36,    37,    38,    39,    42,    45,    46,    49,    52,    53,
      56,    59,    60,    63,    66,    67,    70,    71,    72,    73,
      74,    77,    80,    83,    86,    87,    90,    91,    94,    97,
      98,    99,   100,   101,   102,   105,   106,   109,   112,   113,
     116,   117,   120,   123,   126,   129,   132,   133,   136,   137,
     138,   141,   142,   145,   146,   147,   150,   151,   152,   155,
     156,   157,   160,   161,   162,   165,   166,   169,   170,   173,
     174,   177,   178,   179,   180,   181,   184,   185,   186,   187,
     188,   189
=======
       0,    27,    27,    30,    31,    34,    35,    38,    41,    42,
      45,    46,    47,    48,    51,    54,    55,    58,    61,    62,
      65,    68,    69,    72,    75,    76,    79,    80,    81,    82,
      83,    86,    89,    92,    95,    96,    99,   100,   103,   106,
     107,   108,   109,   110,   111,   114,   115,   118,   121,   122,
     125,   126,   129,   132,   135,   138,   141,   142,   143,   144,
     147,   148,   152,   153,   156,   157,   158,   161,   162,   163,
     166,   167,   168,   171,   172,   173,   174,   175,   176,   179,
     180,   183,   184,   187,   188,   191,   192,   193,   194,   197,
     198,   199,   200,   201,   202
>>>>>>> dev
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
<<<<<<< HEAD
  "PROCEDURE", "FONCTION", "ENTIER", "REEL", "BOOLEEN", "CHAINE",
  "CARACTERE", "CSTE_ENTIERE", "PARENTHESE_FERMANTE",
  "PARENTHESE_OUVRANTE", "VIDE", "RETOURNE", "SI", "ALORS", "SINON",
  "TANT_QUE", "FAIRE", "OPAFF", "OPEG", "OPINF", "OPSUP", "OPINFE",
  "OPSUPE", "OPDIFF", "NEG", "POS", "NOT", "PLUS", "MOINS", "MULT", "DIV",
  "MOD", "ET", "OU", "TRUE", "FALSE", "$accept", "programme", "corps",
  "liste_declarations", "liste_instructions", "suite_liste_inst",
  "declaration", "declaration_type", "suite_declaration_type", "dimension",
=======
  "PROCEDURE", "FONCTION", "PP", "ENTIER", "REEL", "BOOLEEN", "CHAINE",
  "CARACTERE", "CSTE_ENTIERE", "CSTE_REELLE", "CARAC", "CHAINECARAC",
  "PARENTHESE_FERMANTE", "PARENTHESE_OUVRANTE", "VIDE", "RETOURNE", "SI",
  "ALORS", "SINON", "TANT_QUE", "FAIRE", "OPAFF", "OPEG", "OPINF", "OPSUP",
  "OPINFE", "OPSUPE", "OPDIFF", "NEG", "POS", "NOT", "PLUS", "MOINS",
  "MULT", "DIV", "MOD", "ET", "OU", "TRUE", "FALSE", "ERROR_LEXICO",
  "$accept", "programme", "corps", "liste_declarations",
  "liste_instructions", "suite_liste_inst", "declaration",
  "declaration_type", "suite_declaration_type", "dimension",
>>>>>>> dev
  "liste_dimensions", "une_dimension", "liste_champs", "un_champ",
  "nom_type", "type_simple", "declaration_variable",
  "declaration_procedure", "declaration_fonction", "liste_parametres",
  "liste_param", "un_param", "instruction", "resultat_retourne", "appel",
  "liste_arguments", "liste_args", "un_arg", "condition", "tant_que",
<<<<<<< HEAD
  "affectation", "variable", "suite_var", "expression", "ea1", "ea2",
  "ea3", "ea4", "eb1", "eb2", "eb3", "eb4", "comparaison", YY_NULLPTR
=======
  "affectation", "variable", "vtab", "expression", "ea1", "ea2", "ea3",
  "ea4", "eb1", "eb2", "eb3", "eb4", "comparaison", YY_NULLPTR
>>>>>>> dev
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
<<<<<<< HEAD
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -58
=======
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -116

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-116)))

#define YYTABLE_NINF -57
>>>>>>> dev

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
      11,     2,    27,    44,    41,    64,    69,    82,  -111,     2,
    -111,    12,  -111,  -111,  -111,  -111,  -111,     1,  -111,    -3,
      -3,    -3,     4,    89,  -111,  -111,  -111,  -111,    62,   133,
     135,   117,   117,  -111,   143,  -111,    -3,   140,    -3,  -111,
    -111,    48,  -111,    -3,    68,    68,    -3,  -111,  -111,  -111,
    -111,    77,    17,    57,  -111,  -111,   111,    98,  -111,  -111,
    -111,    97,   115,  -111,   160,  -111,    -3,    76,    79,   157,
       2,   136,  -111,    16,    48,  -111,    32,  -111,    77,    70,
      -3,  -111,  -111,    77,  -111,    -3,    -3,    -3,    -3,    -3,
      -3,     0,     0,     0,     0,    -3,    -3,   162,   162,  -111,
      77,   161,   154,  -111,  -111,  -111,  -111,  -111,   156,  -111,
    -111,  -111,   163,     9,  -111,  -111,   137,    48,    -3,  -111,
    -111,    86,    77,    77,    77,    77,    77,    77,    57,    57,
    -111,  -111,    98,  -111,   138,  -111,   164,    35,  -111,    -3,
     165,   148,   137,   157,  -111,     2,  -111,  -111,  -111,   162,
      79,   161,  -111,   106,  -111,    43,    79,   166,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,    -3,   158,  -111,  -111,  -111,
      -3,    77
=======
      20,    93,    10,    46,    49,    63,    70,    83,  -116,    93,
    -116,    92,  -116,  -116,  -116,  -116,  -116,    85,  -116,    11,
      11,    11,    89,   110,  -116,  -116,  -116,  -116,    13,    98,
     119,   101,   101,  -116,   140,  -116,    -3,   154,    11,  -116,
      53,    75,  -116,  -116,  -116,  -116,    11,    58,   102,   102,
    -116,  -116,  -116,  -116,  -116,   113,   -39,  -116,  -116,   114,
     116,  -116,  -116,  -116,   113,   -24,     7,  -116,   144,  -116,
      11,    91,   127,   164,    93,   139,  -116,    -3,    -6,  -116,
       6,  -116,  -116,    -3,   154,    95,   -23,  -116,  -116,  -116,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      11,    11,   169,   169,  -116,  -116,   167,   162,  -116,  -116,
    -116,  -116,  -116,   163,  -116,  -116,  -116,   170,     3,  -116,
    -116,   143,   -20,  -116,    11,  -116,     0,  -116,  -116,  -116,
      54,    54,    54,    54,    54,    54,   -39,   -39,  -116,  -116,
     116,  -116,   141,  -116,   171,    45,  -116,   155,   168,   156,
     143,   164,  -116,    93,  -116,  -116,   169,   127,   167,  -116,
     165,   103,  -116,   127,   172,  -116,  -116,  -116,  -116,  -116,
    -116,   157,  -116,   155,  -116,  -116,  -116,  -116
>>>>>>> dev
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       4,     0,    10,    11,    12,    13,     1,    48,    43,    45,
       0,     0,     0,     0,    42,    40,    41,    39,     0,     0,
       0,    34,    34,     3,     0,     5,     0,     0,     0,    47,
<<<<<<< HEAD
      56,    57,    74,     0,     0,     0,     0,    82,    83,    44,
      73,    46,    61,    65,    68,    71,    62,    76,    78,    80,
      84,     0,     0,     7,     0,     8,     0,     0,     0,     0,
       0,     0,     6,     0,    57,    59,     0,    50,    52,     0,
       0,    69,    70,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      55,     0,     0,    14,    25,    26,    27,    28,     0,    29,
      31,    24,     0,     0,    36,    32,     0,    58,     0,    49,
      72,     0,    86,    87,    88,    89,    90,    91,    63,    64,
      66,    67,    75,    77,     0,    54,     0,     0,    21,     0,
       0,     0,     0,     0,    35,     0,    60,    51,    72,     0,
       0,     0,    15,     0,    18,     0,     0,     0,    38,    37,
      33,    53,    23,    22,    17,     0,     0,    16,    30,    19,
       0,    20
=======
      57,    56,    75,    76,    77,    78,     0,     0,     0,     0,
      86,    87,    44,    74,    46,    62,    66,    69,    72,    63,
      80,    82,    84,    88,     0,     0,     0,     7,     0,     8,
       0,     0,     0,     0,     0,     0,     6,     0,     0,    58,
       0,    50,    52,     0,     0,     0,     0,    83,    71,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    55,     0,     0,    14,    25,
      26,    27,    28,     0,    29,    31,    24,     0,     0,    36,
      32,     0,     0,    61,     0,    49,     0,    59,    73,    85,
      89,    90,    91,    92,    93,    94,    64,    65,    67,    68,
      79,    81,     0,    54,     0,     0,    21,     0,     0,     0,
       0,     0,    35,     0,    51,    60,     0,     0,     0,    15,
       0,     0,    18,     0,     0,    38,    37,    33,    53,    23,
      22,     0,    17,     0,    16,    30,    20,    19
>>>>>>> dev
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -111,  -111,   -66,  -111,    -6,  -111,   167,  -111,  -111,  -111,
    -111,    14,  -111,    26,   -61,  -110,  -111,  -111,  -111,   150,
    -111,    37,   168,  -111,  -111,  -111,  -111,    65,  -111,  -111,
    -111,     8,    67,   -19,  -111,    39,    47,    88,  -111,    90,
      91,   142,  -111
=======
    -116,  -116,   -71,  -116,    -9,  -116,   176,  -116,  -116,  -116,
    -116,    15,  -116,    31,   -99,  -115,  -116,  -116,  -116,   158,
    -116,    40,   173,  -116,  -116,  -116,  -116,    68,  -116,  -116,
    -116,    -1,  -116,   -15,   -18,    24,    44,   112,    -4,    94,
      96,   146,  -116
>>>>>>> dev
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     2,     8,     9,    10,    22,    11,    12,   103,   140,
     153,   154,   137,   138,   110,   111,    13,    14,    15,    70,
     113,   114,    23,    49,    24,    39,    76,    77,    25,    26,
      27,    50,    40,    83,    52,    53,    54,    55,    56,    57,
      58,    59,    60
=======
      -1,     2,     8,     9,    10,    22,    11,    12,   108,   148,
     161,   162,   145,   146,   115,   116,    13,    14,    15,    74,
     118,   119,    23,    52,    24,    39,    80,    81,    25,    26,
      27,    53,    40,    82,    64,    56,    57,    58,    59,    60,
      61,    62,    63
>>>>>>> dev
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      51,    61,    62,    33,   115,    41,   145,     3,    74,     4,
      63,    28,    17,   143,     1,    36,    35,    73,    37,    78,
       5,     6,     7,    42,    79,    43,    42,    16,    80,    38,
      28,   117,   158,    18,    19,    20,   144,   -57,    21,   151,
      44,    45,    46,    44,    45,    75,   152,   100,   118,    29,
      47,    48,    17,    85,    86,    87,    88,    89,    90,   119,
     166,   121,    36,    91,    92,    37,   122,   123,   124,   125,
     126,   127,    30,    18,    19,    20,    74,    31,    21,   160,
      85,    86,    87,    88,    89,    90,   101,   104,   102,   162,
      32,   134,   135,    65,    42,   167,    80,   120,    66,    78,
     105,   106,   107,   108,   109,    93,    94,    85,    86,    87,
      88,    89,    90,   148,    85,    86,    87,    88,    89,    90,
     155,   164,   165,    85,    86,    87,    88,    89,    90,    97,
     128,   129,    81,    82,    85,    86,    87,    88,    89,    90,
     130,   131,    67,   161,    68,    69,   155,    72,    74,    96,
      98,   171,    85,    86,    87,    88,    89,    90,   105,   106,
     107,   108,   109,    95,    99,   112,   116,     3,   139,   136,
     141,   149,   142,   150,   157,   170,    34,   163,   156,   169,
     159,   168,    71,   147,   146,   132,     0,   133,    84,     0,
      64
=======
      33,    55,    28,   120,    54,    41,   153,   151,   129,   123,
      16,   128,   102,    98,    99,   155,    65,    66,    78,    41,
      55,    28,   124,     1,    42,    43,    44,    45,    85,    77,
      96,    97,   100,   100,   152,   165,    79,   125,    42,    43,
      44,    45,    86,    46,    96,    97,   103,    48,    49,   158,
      96,    97,    55,    70,    17,   105,   159,    29,   169,   122,
      47,    48,    49,   100,   174,   126,    41,    83,    50,    51,
      84,    30,   130,   131,   132,   133,   134,   135,    31,    18,
      19,    20,   167,   127,    21,    42,    43,    44,    45,    36,
      46,    32,    37,   142,   143,    67,    35,    17,     3,    36,
       4,   106,    37,   107,    96,    97,    55,    71,    48,    49,
      41,     5,     6,     7,    69,    50,    51,    38,   172,   173,
     136,   137,    18,    19,    20,   -56,   128,    21,    72,    42,
      43,    44,    45,    73,    77,   109,    90,    91,    92,    93,
      94,    95,   138,   139,    76,    96,    97,   168,   104,   110,
     111,   112,   113,   114,    90,    91,    92,    93,    94,    95,
      88,    89,    41,    96,    97,   110,   111,   112,   113,   114,
     100,   101,   117,   121,     3,   144,   147,   149,   156,   150,
     157,   163,   160,   164,   176,    34,   171,   175,   177,   170,
      75,   166,   154,    87,   140,    68,     0,   141
>>>>>>> dev
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
      19,    20,    21,     9,    70,     8,   116,     5,     8,     7,
       6,     3,     8,     4,     3,    14,     4,    36,    17,    38,
      18,    19,    20,    26,    43,    28,    26,     0,    28,    28,
      22,    15,   142,    29,    30,    31,    27,    36,    34,     4,
      43,    44,    45,    43,    44,    37,    11,    66,    16,     8,
      53,    54,     8,    37,    38,    39,    40,    41,    42,    27,
      17,    80,    14,    46,    47,    17,    85,    86,    87,    88,
      89,    90,     8,    29,    30,    31,     8,     8,    34,   145,
      37,    38,    39,    40,    41,    42,    10,     8,    12,   150,
       8,    97,    98,     4,    26,   156,    28,    27,    36,   118,
      21,    22,    23,    24,    25,    48,    49,    37,    38,    39,
      40,    41,    42,    27,    37,    38,    39,    40,    41,    42,
     139,    15,    16,    37,    38,    39,    40,    41,    42,    32,
      91,    92,    44,    45,    37,    38,    39,    40,    41,    42,
      93,    94,     9,   149,     9,    28,   165,     4,     8,    51,
      35,   170,    37,    38,    39,    40,    41,    42,    21,    22,
      23,    24,    25,    52,     4,     8,    30,     5,    14,     8,
      14,    33,     9,     9,    26,    17,     9,   151,    13,   165,
     143,    15,    32,   118,   117,    95,    -1,    96,    46,    -1,
      22
=======
       9,    19,     3,    74,    19,     8,   121,     4,    31,    15,
       0,    31,    36,    52,    53,    15,    20,    21,    36,     8,
      38,    22,    16,     3,    27,    28,    29,    30,    46,    32,
      50,    51,    56,    56,    31,   150,    37,    31,    27,    28,
      29,    30,    46,    32,    50,    51,    39,    50,    51,     4,
      50,    51,    70,    40,     8,    70,    11,     8,   157,    77,
      49,    50,    51,    56,   163,    83,     8,    14,    57,    58,
      17,     8,    90,    91,    92,    93,    94,    95,     8,    33,
      34,    35,   153,    84,    38,    27,    28,    29,    30,    14,
      32,     8,    17,   102,   103,     6,     4,     8,     5,    14,
       7,    10,    17,    12,    50,    51,   124,     9,    50,    51,
       8,    18,    19,    20,     4,    57,    58,    32,    15,    16,
      96,    97,    33,    34,    35,    40,    31,    38,     9,    27,
      28,    29,    30,    32,    32,     8,    41,    42,    43,    44,
      45,    46,    98,    99,     4,    50,    51,   156,     4,    22,
      23,    24,    25,    26,    41,    42,    43,    44,    45,    46,
      48,    49,     8,    50,    51,    22,    23,    24,    25,    26,
      56,    55,     8,    34,     5,     8,    14,    14,    37,     9,
       9,    13,    27,    27,    27,     9,    21,    15,   173,   158,
      32,   151,   124,    47,   100,    22,    -1,   101
>>>>>>> dev
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,     3,    56,     5,     7,    18,    19,    20,    57,    58,
      59,    61,    62,    71,    72,    73,     0,     8,    29,    30,
      31,    34,    60,    77,    79,    83,    84,    85,    86,     8,
       8,     8,     8,    59,    61,     4,    14,    17,    28,    80,
      87,     8,    26,    28,    43,    44,    45,    53,    54,    78,
      86,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    88,    88,     6,    77,     4,    36,     9,     9,    28,
      74,    74,     4,    88,     8,    86,    81,    82,    88,    88,
      28,    92,    92,    88,    96,    37,    38,    39,    40,    41,
      42,    46,    47,    48,    49,    52,    51,    32,    35,     4,
      88,    10,    12,    63,     8,    21,    22,    23,    24,    25,
      69,    70,     8,    75,    76,    57,    30,    15,    16,    27,
      27,    88,    88,    88,    88,    88,    88,    88,    90,    90,
      91,    91,    94,    95,    59,    59,     8,    67,    68,    14,
      64,    14,     9,     4,    27,    70,    87,    82,    27,    33,
       9,     4,    11,    65,    66,    88,    13,    26,    70,    76,
      57,    59,    69,    68,    15,    16,    17,    69,    15,    66,
      17,    88
=======
       0,     3,    61,     5,     7,    18,    19,    20,    62,    63,
      64,    66,    67,    76,    77,    78,     0,     8,    33,    34,
      35,    38,    65,    82,    84,    88,    89,    90,    91,     8,
       8,     8,     8,    64,    66,     4,    14,    17,    32,    85,
      92,     8,    27,    28,    29,    30,    32,    49,    50,    51,
      57,    58,    83,    91,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    94,    98,    98,     6,    82,     4,
      40,     9,     9,    32,    79,    79,     4,    32,    94,    91,
      86,    87,    93,    14,    17,    94,    98,   101,    97,    97,
      41,    42,    43,    44,    45,    46,    50,    51,    52,    53,
      56,    55,    36,    39,     4,    93,    10,    12,    68,     8,
      22,    23,    24,    25,    26,    74,    75,     8,    80,    81,
      62,    34,    94,    15,    16,    31,    94,    91,    31,    31,
      94,    94,    94,    94,    94,    94,    95,    95,    96,    96,
      99,   100,    64,    64,     8,    72,    73,    14,    69,    14,
       9,     4,    31,    75,    87,    15,    37,     9,     4,    11,
      27,    70,    71,    13,    27,    75,    81,    62,    64,    74,
      73,    21,    15,    16,    74,    15,    27,    71
>>>>>>> dev
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
<<<<<<< HEAD
       0,    55,    56,    57,    57,    58,    58,    59,    60,    60,
      61,    61,    61,    61,    62,    63,    63,    64,    65,    65,
      66,    67,    67,    68,    69,    69,    70,    70,    70,    70,
      70,    71,    72,    73,    74,    74,    75,    75,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    80,    80,
      81,    81,    82,    83,    84,    85,    86,    86,    87,    87,
      87,    88,    88,    89,    89,    89,    90,    90,    90,    91,
      91,    91,    92,    92,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97
=======
       0,    60,    61,    62,    62,    63,    63,    64,    65,    65,
      66,    66,    66,    66,    67,    68,    68,    69,    70,    70,
      71,    72,    72,    73,    74,    74,    75,    75,    75,    75,
      75,    76,    77,    78,    79,    79,    80,    80,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    85,    85,
      86,    86,    87,    88,    89,    90,    91,    91,    91,    91,
      92,    92,    93,    93,    94,    94,    94,    95,    95,    95,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   102
>>>>>>> dev
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     2,     3,     3,     2,     3,
       1,     1,     1,     1,     4,     3,     4,     3,     1,     3,
<<<<<<< HEAD
       4,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     6,     0,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     2,     0,     1,     2,     0,     3,
       1,     3,     1,     6,     4,     3,     2,     1,     0,     2,
       4,     1,     1,     3,     3,     1,     3,     3,     1,     2,
       2,     1,     3,     1,     1,     3,     1,     3,     1,     2,
       1,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3
=======
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     6,     0,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     2,     0,     1,     2,     0,     3,
       1,     3,     1,     6,     4,     3,     1,     2,     3,     4,
       4,     3,     1,     1,     3,     3,     1,     3,     3,     1,
       2,     2,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     3
>>>>>>> dev
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
      
<<<<<<< HEAD
#line 1442 "y.tab.c" /* yacc.c:1646  */
=======
#line 1462 "y.tab.c" /* yacc.c:1646  */
>>>>>>> dev
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
<<<<<<< HEAD
#line 191 "grammaire.y" /* yacc.c:1906  */
=======
#line 204 "yacc.y" /* yacc.c:1906  */


int yyerror(){
    printf("erreur ligne %d\n", numligne);
}

>>>>>>> dev
