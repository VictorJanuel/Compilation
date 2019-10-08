/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
