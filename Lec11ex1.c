#include <stdio.h>

int main(){
	int arr[100];
	int n;
	int i;
	do{
		printf("Nhap so luong phan tu : ");
		scanf("%d", &n);
	}while(n < 1);	
	
	int *p = &arr[0];
	for(i = 0; i < n; i++){
		printf("Nhap a[%d] = ", i);
		scanf("%d", (p + i));
	}
	printf("\nMang da nhap la : ");
	for(i = 0; i < n; i++){
		printf("%d ", *(p + i));
	}
	printf("\nMang sau khi tang la : ");
	for(i = 0; i < n; i++){
		printf("%d ", *(p + i) + 2);
	}
}
