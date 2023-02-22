// https://www.codewars.com/kata/54598e89cbae2ac001001135
#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate)(int);

bool any(const int* arr, size_t size, Predicate fun)
{
	for(int i = 0; i < size; i++){
		if(fun(arr[i])){
			return true;
		}
	}
    return false;
}

#include <stdio.h>

bool greater_than_4(int x) {
	printf("greater_than_4: test %d. Result %d\n", x, (x > 4));
	return x > 4;
}
bool greater_than_9(int x) {
	printf("greater_than_9: test %d. Result %d\n", x, (x > 9));
	return x > 9;
}

int main(){
	int arr[] = { 1, 2, 3, 4, 5 };
    size_t size = sizeof(arr) / sizeof(int);

    printf("Greater then 4: %d\n", any(arr, size, greater_than_4));
    printf("Greater then 9: %d\n", any(arr, size, greater_than_9));

	return 0;
}
