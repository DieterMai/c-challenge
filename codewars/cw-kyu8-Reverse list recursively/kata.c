// https://www.codewars.com/kata/57a883cfbb9944a97c000088
#include <stdio.h>

int* revR (int* array, int n);

void printArray(int* array, int n);

int* revR (int* array, int n){
	if(n < 2) return array;
	
	//printf("Swap element %i with %i\n", array[0], array[n-1]);
	int tmp = array[0];
	array[0] = array[n-1];
	array[n-1] = tmp;
	// printArray(array, n);
	revR(array+1, n-2);
	return array;
}

void printArray(int* array, int n){
	for(int i = 0; i < n; i++){
		printf("%i,", array[i]);
	}
	printf("\n");	
}


int main(){
	int list[] = {1,2,3,4,5,6,7};
	int count = sizeof(list)/sizeof(list[0]);
	printf("Size of list %i\n", count);
	
	for(int i = 0; i < count; i++){
		printf("Element %i: %i\n", i, list[i]);
	}
	
	int* reversed = revR(list, count);
	
	printf("\nAfter list was reverced\n");
	for(int i = 0; i < count; i++){
		printf("Element %i: %i\n", i, reversed[i]);
	}

}