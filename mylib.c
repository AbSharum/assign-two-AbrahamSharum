#include "mylib.h"

int Strlen(char *str) {
	int bytes = 0;

	while(*str != '\0') {
		bytes++;
		str++;
	}

    return bytes;
}

char *Strcpy(char *dest, char *src){
    
}

char *Strcat(char *dest, char *src){
}

char *Strchr(char *str, int c){
}

int Strcmp(char *s1, char *s2){
}
