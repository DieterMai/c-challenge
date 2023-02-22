// https://www.codewars.com/kata/57fb09ef2b5314a8a90001ed

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace(const char *s)
{
	if(s == NULL){
		return NULL;
	}

	char* copy = calloc(strlen(s)+1, sizeof(char));
	int index = 0;
	char c;
	do{
		c = s[index];
		switch(c){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			copy[index] = '!';
			break;
		default:
			copy[index] = c;
			break;
		}
		index++;
	} while (c);

	return copy;
}


int main(){
	printf("%s\n", replace("ABCDEFGabcdefg"));
}
