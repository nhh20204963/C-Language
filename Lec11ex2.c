#include <stdio.h>
#define SIZE 5
int main(){
	unsigned int arr[SIZE] = { 2, 4, 6, 8, 10 };
	int i;
	int *p = &arr[0];
	printf("Mang da cho la : ");
	for(i = 0; i < SIZE; i++){
		printf("%d ", *(p + i));
	}
}
