#include <stdio.h>

int main(){
	int a[100];
	int n, i;
	int sum = 0;
	printf("So phan tu trong mang la ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);	
	}
	int min = a[0];
	int max = a[0];
	for(i = 0; i < n; i++){
		sum += a[i];
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("%d\n", sum);
	printf("%d\n", max);
	printf("%d", min);
	return 0;
}
