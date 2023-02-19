// https://www.codewars.com/kata/570bcd9715944a2c8e000009

#include <stdio.h>

char* sc(int n)
{
	if(n <= 1){
		return "";
	}
	int length = 0;
	if(n <= 6){
		length = (n+1)*4+1;
		char string[length];
		for(int i = 0; n < length-2; i++){
			string[i*4] = 'A';
			string[i*4+1] = 'a';
			string[i*4+2] = '~';
			string[i*4+3] = ' ';
		}
		string[length-8] = 'P';
		string[length-7] = 'a';
		string[length-6] = '!';
		string[length-5] = ' ';
		string[length-4] = 'A';
		string[length-3] = 'a';
		string[length-2] = '!';
		string[length-1] = '\n';
		return &string;
	}else{
		length = n*4+1;
		char string[length];
		for(int i = 0; n < length-1; i++){
			string[i*4] = 'A';
			string[i*4+1] = 'a';
			string[i*4+2] = '~';
			string[i*4+3] = ' ';
		}
		string[length-4] = 'P';
		string[length-3] = 'a';
		string[length-2] = '!';
		string[length-1] = '\n';
		return &string;

	}
}

int main(){
	puts(sc(2));
	puts(sc(6));
	puts(sc(7));
	puts(sc(10));
	puts(sc(1));
	puts(sc(-1));
	
	
}
