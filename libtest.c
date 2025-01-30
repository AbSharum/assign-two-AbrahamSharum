#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

void display(char **tokens);

int main(void){
	char *string = malloc(20);
	Strcpy(string,"Hello");


	printf("Running the end of string test: %s\n",string);
	printf("Running the length test: %d\n", Strlen(string));

	Strcat(string,string);

	printf("Running the concat test: %s\n", string);
	printf("Running the check char test: %s\n", Strchr(string,'e'));
	printf("Running the comparison test: %d %d %d\n", Strcmp("a","b"),Strcmp("a","a"),Strcmp("b","a"));

	free(string);

	char **tokens = Tokenize("this,is.a/test","");
	display(tokens);

	return 0;
}

void display(char **tokens) {
	while (*tokens != NULL)
	{
		printf("%s\n",*tokens);
		tokens++;
	}
	
}


