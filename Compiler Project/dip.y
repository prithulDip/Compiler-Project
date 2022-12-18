%{ //header functions	
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
	
%}

%union{
	int ival;
	double floatValue;
	char* stringValue;
}

%token HERE  Int Float Char Bool BEGINN END ID NUM ASSIGN CHARACTER ADD SUB MUL DIV POW EQL SHOW SIN COS TAN LOG10 LOG LorE GorE ELSEIF GREATER LESSER ELSE IF MINN MAX GCD FOR WHILE
%left ADD SUB
%left DIV MUL

%type<floatValue>HERE  Int Float Char Bool BEGINN END TYPE NUM  assignment expression ASSIGN ADD SUB MUL DIV POW EQL t SHOW SIN COS TAN LOG10 LOG mathematics sinFunct cosFunct tanFunct logFunct log10Funct ifCondition LorE GorE GREATER LESSER then ELSE IF ELSEIF MINN MAX GCD minFunct maxFunct GcdFunct FOR for_code WHILE while_code

%type<stringValue> ID1 ID CHARACTER

%%

program:HERE BEGINN statement END	{printf("\nValid statement\n");}
		;

statement: 
        |declaration statement
        |assignment statement
        |expression statement
        |print_code statement
		|mathematics statement
		|ifCondition statement
		|for_code statement
		|while_code statement
        ;

//DECLARATION section
declaration: TYPE ID1 '!' {
    setDataType($1);

}   
    ;
TYPE: Int   {$$ = 1; printf("\nTyp:- INT\n");}
        |Float   {$$ = 2; printf("\nTyp:- FLAOT\n");}
        |Char   {$$ = 3; printf("\nTyp:- CHAR\n");}
        ;

ID1: ID1 ',' ID {
	if(varSearch($3)==0){
		printf("\nValid declaration\n");
		strcpy(arr_To_Store_Variables[numberOfVars].variableName, $3);
		printf("\nVariable name: %s", $3);
		arr_To_Store_Variables[numberOfVars].Type =  -1;
		numberOfVars = numberOfVars + 1;
	}
	else{
		printf("\nVariable is already used");
	}
} 
	| ID {
	if(varSearch($1)==0){
		printf("\nValid declaration\n");
		strcpy(arr_To_Store_Variables[numberOfVars].variableName, $1);
		printf("\nVariable name: %s", $1);
		arr_To_Store_Variables[numberOfVars].Type =  -1;
		numberOfVars = numberOfVars + 1;
	}
	else{
		printf("\nVariable is already used\n");
	}
	strcpy($$, $1);
}
	;

assignment: ID ASSIGN expression '!' {
	$$ = $3;
	if(varSearch($1)==1){
		int i = getVariableIndex($1);
		if(arr_To_Store_Variables[i].Type==1){
			arr_To_Store_Variables[i].intValue = $3;
			printf("\nVariable value: %d (INT)", arr_To_Store_Variables[i].intValue);
		}
		else if(arr_To_Store_Variables[i].Type==2){
			arr_To_Store_Variables[i].floatValue = (float)$3;
			printf("\nVariable value: %f (FLOAT)", arr_To_Store_Variables[i].floatValue);
		}
	}
	else{
		printf("\nVariable is not declared\n");
	}
}
	|ID ASSIGN CHARACTER '!'{
		//$$ = $3;
	    if(varSearch($1)==1){
		int i = getVariableIndex($1);
		if(arr_To_Store_Variables[i].Type==3){
			arr_To_Store_Variables[i].stringValue = $3;
			printf("\nVariable value: %s (CHAR)", arr_To_Store_Variables[i].stringValue);
			}
		}
	}
	;

expression: NUM					{ $$ = $1; 	}
        
	|  ADD '(' expression ',' expression ')'    {$$ = $3 + $5;}

	|  SUB '('expression ',' expression')'	{ $$ = $3 - $5; }

	|  MUL '('expression ',' expression')'	{ $$ = $3 * $5; }

	|  DIV '('expression ',' expression')'	{ if($5){
				     					$$ = $3 / $5;
				  					}
				  					else{
										$$ = 0;
										printf("\ndivision by zero error\t");
				  					} 	
				    			}
	| expression POW expression	{ $$ = pow($1 , $3);}
	| '(' expression ')'		{ $$ = $2;}
    |expression EQL expression { $$ = $1 == $3; } 
	| expression LESSER expression	{ $$ = $1 < $3; }
	
	| expression GREATER expression	{ $$ = $1 > $3; }
	| expression GorE expression	{ $$ = $1 >= $3; }
	
	| expression LorE expression	{ $$ = $1 <= $3; }
	| mathematics  
	| t {$$=$1};

t: '(' expression ')' {$$ = $2;}
	| ID { 
	int index = getVariableIndex($1);
	if(index == -1)
	{
		yyerror("VARIABLE DOESN'T EXIST\n");
	}
	else
	{
		
		if(arr_To_Store_Variables[index].Type == 1)
		{
			$$ = arr_To_Store_Variables[index].intValue;
		}
		else if(arr_To_Store_Variables[index].Type == 2)
		{
			$$ = arr_To_Store_Variables[index].floatValue;
		}
	}
    }
	;

print_code: SHOW '(' ID ')''!'{
	int i = getVariableIndex($3);
	if(arr_To_Store_Variables[i].Type == 1){
		printf("\nVariable name:---> %s, Value:---> %d\n\n", arr_To_Store_Variables[i].variableName, arr_To_Store_Variables[i].intValue);
	}
	else if(arr_To_Store_Variables[i].Type == 2){
		printf("\nVariable name:---> %s, Value:---> %f\n\n", arr_To_Store_Variables[i].variableName, arr_To_Store_Variables[i].floatValue);
	}
	else{
		printf("\nVariable name:---> %s, Value:---> %s\n\n", arr_To_Store_Variables[i].variableName, arr_To_Store_Variables[i].stringValue); 	}
	}

	
	;	
mathematics:
       sinFunct 
	| cosFunct 
	| tanFunct 
	| logFunct 
	| log10Funct 
	| minFunct
	| maxFunct
	| GcdFunct
	;
	minFunct:MINN '(' expression ',' expression ')'{
        if($3>$5)
        {
            $$ = $5;
        }
        else
        {
            $$ = $3;
        }
        printf("%d\n",$$);
    }
    maxFunct:MAX '(' expression ',' expression ')'{
        if($3>$5)
        {
            $$ = $3;
        }
        else
        {
            $$ = $5;
        }
       
    }
    GcdFunct:GCD '(' expression ',' expression ')'{
       int c;
       int a = $3;
       int b = $5;
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
       $$ = b;
    }
	;

    sinFunct: SIN '(' expression ')'  {
	printf("\nValue of Sin(%lf) is %lf\n\n",$3,sin($3*3.1416/180)); 
	$$=sin($3*3.1416/180);
}
	;
	

cosFunct: COS '(' expression ')'  {
	printf("\nValue of Cos(%lf) is %lf\n\n",$3,cos($3*3.1416/180)); 
	$$=cos($3*3.1416/180);
}
	;
tanFunct: TAN '(' expression ')'  {
	printf("\nValue of Tan(%lf) is %lf\n\n",$3,tan($3*3.1416/180)); 
	$$=tan($3*3.1416/180);
}
	;


log10Funct: LOG10 '(' expression ')'  {
	printf("Value of Log10(%lf) is %lf\n\n",$3,(log($3*1.0)/log(10.0))); 
	$$=(log($3*1.0)/log(10.0));
}
	;
logFunct: LOG '(' expression ')'  {
	printf("Value of Log(%lf) is %lf\n\n",$3,(log($3))); 
	$$=(log($3));
}	
;

ifCondition: IF '('expression')' '{' then '}' {
			if($3==1)
			printf("%d \n",(int)$6);
			}
			|IF '('expression')' '{' then '}' ELSE '{' then '}' {
			if($3==1)
			printf("%d \n",(int)$6);
			
			else
			printf("%d \n",(int)$10);
			}
			|IF '('expression')' '{' then '}' ELSEIF '('expression')' '{' then '}' ELSE '{' then '}' {
			if($3==1)
			printf("%d \n",(int)$6);
			
			else if($10==1)
			printf("%d \n",(int)$13);

			else
			printf("%d \n",(int)$17);
			}
			;
then:NUM					{ $$ = $1; 	}
        
	|  ADD '(' expression ',' expression ')'    {$$ = $3 + $5;}

	|  SUB '('expression ',' expression')'	{ $$ = $3 - $5; }

	|  MUL '('expression ',' expression')'	{ $$ = $3 * $5; }

	|  DIV '('expression ',' expression')'	{ if($5){
				     					$$ = $3 / $5;
				  					}
				  					else{
										$$ = 0;
										printf("\ndivision by zero error\t");
				  					} 	
				    			}
	| expression POW expression	{ $$ = pow($1 , $3);}
	;

	for_code: FOR '('NUM '!' NUM '!' NUM ')''!' {
	printf("\nFor loop\n");
	int i = $3;
	int j = $5;
	int inc = $7;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	}
	|FOR '('ID '!' NUM '!' NUM ')''!' {
	printf("\nFor loop\n");
	int idex = getVariableIndex($3);
	int i = arr_To_Store_Variables[idex].intValue;
	int j = $5;
	int inc = $7;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	}
	|FOR '('ID '!' ID '!' NUM ')''!' {
	printf("\nFor loop\n");
	int idex = getVariableIndex($3);
	int i = arr_To_Store_Variables[idex].intValue;
	idex = getVariableIndex($5);
	int j = arr_To_Store_Variables[idex].intValue;
	int inc = $7;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	}
	|FOR '('ID '!' ID '!' ID ')''!' {
	printf("\nFor loop\n");
	int idex = getVariableIndex($3);
	int i = arr_To_Store_Variables[idex].intValue;
	idex = getVariableIndex($5);
	int j = arr_To_Store_Variables[idex].intValue;
	idex = getVariableIndex($7);
	int inc = arr_To_Store_Variables[idex].intValue;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	}
	|FOR '('NUM '!' ID '!' ID ')''!' {
	printf("\nFor loop\n");	
	int i = $3;
	int idex = getVariableIndex($5);
	int j = arr_To_Store_Variables[idex].intValue;
	idex = getVariableIndex($7);
	int inc = arr_To_Store_Variables[idex].intValue;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	}

	|FOR '('NUM '!' NUM '!' ID ')''!' {
	printf("\nFor loop\n");
	int i = $3;
	int j = $5;
	int idex = getVariableIndex($7);
	int inc = arr_To_Store_Variables[idex].intValue;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("%d+%d\n",k,inc);
		printf("LOOP RUNNING\n");
	}
	printf("LOOP END\n");	
	}
	;
	
	while_code:  WHILE'(' expression ')''{' statement '}'{
	printf("\nWhile Loop\n");
	
	
	}
	;

%%

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