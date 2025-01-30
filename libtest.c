#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

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

	return 0;
}


