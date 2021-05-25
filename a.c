#include <stdio.h>

int main(){
	int a[5];
    int sum = 0;
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
	}
	for(i = 0; i < 5; i++){
		sum += a[i];
	}
	printf("Sum = %d\n", sum);
	int max = a[0];
	int min = a[0];
	for(i = 0; i < 5; i++){
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("Max array = %d\n", max);
	printf("Min array = %d", min);
}
