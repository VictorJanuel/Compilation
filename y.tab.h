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
    FLECHE = 273,
    VARIABLE = 274,
    PROCEDURE = 275,
    FONCTION = 276,
    ENTIER = 277,
    REEL = 278,
    BOOLEEN = 279,
    CHAINE = 280,
    CARACTERE = 281,
    CSTE_ENTIERE = 282,
    CSTE_REELLE = 283,
    PARENTHESE_FERMANTE = 284,
    PARENTHESE_OUVRANTE = 285,
    VIDE = 286,
    RETOURNE = 287,
    SI = 288,
    ALORS = 289,
    SINON = 290,
    TANT_QUE = 291,
    FAIRE = 292,
    OPAFF = 293,
    OPEG = 294,
    OPINF = 295,
    OPSUP = 296,
    OPINFE = 297,
    OPSUPE = 298,
    OPDIFF = 299,
    NEG = 300,
    POS = 301,
    NOT = 302,
    PLUS = 303,
    MOINS = 304,
    MULT = 305,
    DIV = 306,
    MOD = 307,
    ET = 308,
    OU = 309,
    TRUE = 310,
    FALSE = 311,
    ERROR_LEXICO = 312
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
#define FLECHE 273
#define VARIABLE 274
#define PROCEDURE 275
#define FONCTION 276
#define ENTIER 277
#define REEL 278
#define BOOLEEN 279
#define CHAINE 280
#define CARACTERE 281
#define CSTE_ENTIERE 282
#define CSTE_REELLE 283
#define PARENTHESE_FERMANTE 284
#define PARENTHESE_OUVRANTE 285
#define VIDE 286
#define RETOURNE 287
#define SI 288
#define ALORS 289
#define SINON 290
#define TANT_QUE 291
#define FAIRE 292
#define OPAFF 293
#define OPEG 294
#define OPINF 295
#define OPSUP 296
#define OPINFE 297
#define OPSUPE 298
#define OPDIFF 299
#define NEG 300
#define POS 301
#define NOT 302
#define PLUS 303
#define MOINS 304
#define MULT 305
#define DIV 306
#define MOD 307
#define ET 308
#define OU 309
#define TRUE 310
#define FALSE 311
#define ERROR_LEXICO 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
