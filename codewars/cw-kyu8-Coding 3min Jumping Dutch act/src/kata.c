// https://www.codewars.com/kata/570bcd9715944a2c8e000009

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* sc(int n)
{
	if(n <= 1){
		return strdup("");
	}
	int length = n*4+4;
	char* string = (char*)calloc(length, sizeof(char));
	for(int i = 0; i < n-1; i++){
		string = strcat(string, "Aa~ ");
	}

	if(n <= 6){
		string = strcat(string, "Pa! Aa!");
	}else{
		string = strcat(string, "Pa!");
	}

	return string;
}

int main() {
	setbuf(stdout, NULL);
	printf("Testing kata\n");
	printf("sc(1): %s\n", sc(1));
	printf("sc(2): %s\n", sc(2));
	printf("sc(3): %s\n", sc(3));
	printf("sc(4): %s\n", sc(4));
	printf("sc(5): %s\n", sc(5));
	printf("sc(6): %s\n", sc(6));
	printf("sc(7): %s\n", sc(7));
	printf("sc(8): %s\n", sc(8));
	printf("sc(9): %s\n", sc(9));
	printf("sc(10): %s\n", sc(10));

}
