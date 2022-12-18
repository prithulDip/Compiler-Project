%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include <math.h>
	#include "dip.tab.h"
	extern char* strdup(const char*);
	void yyerror(char *s);
%}

VARIABLE	[_a-zA-Z][_a-zA-Z0-9]*
include	"bring"[ ][a-z]+.[h]
DIGIT	[-]?[0-9][0-9]*[.]?[0-9]*
multiLineComment		[ ]*[/CMNT/].*[/END/]	
string	["].*["]

%%

HERE return(HERE);
number	return(Int);
floating	return(Float);
line	return(Char);
BEGINN	return(BEGINN);
END	return(END);
--> return(ASSIGN);
ADD	 return(ADD);
SUB	 return(SUB);
MUL	 return(MUL);
DIV	 return(DIV);
POW	 return(POW);
=	 return(EQL);
SHOW	return(SHOW);
SIN	return(SIN);
COS	return(COS);
TAN	return(TAN);
LOG10	return(LOG10);
LOG	return(LOG);
IF	return(IF);
ELSEIF	return(ELSEIF);
ELSE	return(ELSE);
LESSER	return(LESSER);
GREATER	return(GREATER);
GorE return(GorE);
LorE return(LorE);
MIN return(MINN);
MAX	return(MAX);
GCD	return(GCD);
FOR return(FOR);
WHILE return(WHILE);


{include}	printf("Bringing associative files\n");
{VARIABLE}	{yylval.stringValue = strdup(yytext); return(ID);}
{string}	{
	yytext++;
			int l=strlen(yytext);
            yylval.stringValue=yytext;
            yylval.stringValue[l-1]='\0';
	 		return(CHARACTER);
}
{DIGIT}	{	int length = strlen(yytext);
			int i = 0;
			while(i<length){
				if(yytext[i]=='.'){
					yylval.floatValue = atof(yytext); 
					return(NUM);
				}
				i++;
			}
			yylval.floatValue = atoi(yytext); 
			return(NUM);
		}


{multiLineComment} 	{printf("\nThis is a  comment\n");}
[,;{}()!-><]	{yylval.stringValue = strdup(yytext); return *yytext;}
.		yyerror("Invalid Character for this edition.");
[\n]	{}




%%

int yywrap(void){
	return 1;
}