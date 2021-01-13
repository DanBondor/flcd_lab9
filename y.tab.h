/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    START_PRG = 258,
    SEMICOLON = 259,
    END_PRG = 260,
    IDENTIFIER = 261,
    NUMBER = 262,
    CHAR = 263,
    STRING = 264,
    VECTOR = 265,
    LEFT_SQUARE_PARANTESIS = 266,
    RIGHT_SQUARE_PARANTESIS = 267,
    DOT_EQUAL = 268,
    PLUS = 269,
    MINUS = 270,
    MULTIPLY = 271,
    DIVIDE = 272,
    IF = 273,
    WHILE = 274,
    FOR = 275,
    EQUAL = 276,
    COLON = 277,
    LEFT_PARANTESIS = 278,
    RIGHT_PARANTESIS = 279,
    READ = 280,
    PRINT = 281,
    LESS_THAN = 282,
    LESS_OR_EQUAL_THAN = 283,
    EQUAL_EQUAL = 284,
    NOT_EQUAL = 285,
    AND = 286,
    OR = 287,
    GREATER_THAN = 288,
    GREATER_OR_EQUAL_THAN = 289,
    ELSE = 290
  };
#endif
/* Tokens.  */
#define START_PRG 258
#define SEMICOLON 259
#define END_PRG 260
#define IDENTIFIER 261
#define NUMBER 262
#define CHAR 263
#define STRING 264
#define VECTOR 265
#define LEFT_SQUARE_PARANTESIS 266
#define RIGHT_SQUARE_PARANTESIS 267
#define DOT_EQUAL 268
#define PLUS 269
#define MINUS 270
#define MULTIPLY 271
#define DIVIDE 272
#define IF 273
#define WHILE 274
#define FOR 275
#define EQUAL 276
#define COLON 277
#define LEFT_PARANTESIS 278
#define RIGHT_PARANTESIS 279
#define READ 280
#define PRINT 281
#define LESS_THAN 282
#define LESS_OR_EQUAL_THAN 283
#define EQUAL_EQUAL 284
#define NOT_EQUAL 285
#define AND 286
#define OR 287
#define GREATER_THAN 288
#define GREATER_OR_EQUAL_THAN 289
#define ELSE 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
