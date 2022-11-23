// https://www.codewars.com/kata/57a37f3cbb99449513000cd8
#include <stdio.h>

int get_number_from_string(const char *src) {
	int result = 0;
	for(int i = 0; src[i] != '\0'; i++){
		if(src[i] >= '0' && src[i] <= '9'){
			result = result * 10 + (src[i]-'0');
		}
	}
	
	return result;
}


void main(){
	printf("Hello5 World6: %i", get_number_from_string("Hello5 World6"));
	
}