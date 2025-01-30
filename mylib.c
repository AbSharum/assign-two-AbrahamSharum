#include "mylib.h"
#include <stdio.h>
#include <stdlib.h>

int Strlen(char *str) {
	int bytes = 0;

	while(*str != '\0') {
		bytes++;
		str++;
	}

    return bytes;
}

char *Strcpy(char *dest, char *src){

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = *src;
	
	return dest;
	
}


char *Strcat(char *dest, char *src){

	int len = dest == src ? Strlen(src) : -1;

	while(*dest != '\0') {
		dest++;
	}

	do{
		*dest = *src;
		src++;
		dest++;
		len--;
	} while (*src != '\0' && len != 0);

	return dest;
}

char *Strchr(char *str, int c){
	while(*str != '\0') {
		if (c == *str) return str;
		str++;
	}
	return NULL;

}

int Strcmp(char *s1, char *s2){
	int s1Total = 0;
	int s2Total = 0;

	while(*s1 != '\0') {
		s1Total += *s1;
		s1++;
	}

	while(*s2 != '\0') {
		s2Total += *s2;
		s2++;
	}

	if (s1Total == s2Total) return 0;
	return s1Total > s2Total ? 1 : -1;
}

char *Tokenize(char *str, char *delimiter) {
	int size = Strlen(str) - Strlen(delimiter);
	char *tokens = malloc(size);
	while(*str != '\0') {
		
	}
}
