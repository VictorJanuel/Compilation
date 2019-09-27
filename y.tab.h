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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
