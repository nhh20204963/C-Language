#include <stdio.h>

int main(){
	int arr[100];
	int n;
	int i;
	do{
		printf("Nhap so luong phan tu: ");
		scanf("%d", &n);
	}while(n < 1);
/* Dung con tro de in ra man hinh 1 mang */
	int *p = &arr[0];
	for(i = 0; i < n; i++){
		printf("Nhap a[%d] = ", i);
		scanf("%d", (p + i));
	}
	printf("\nMang la : ");
	for(i = 0; i < n; i++){
		printf("%d ", *(p + i));
	}
/*Dung chi so mang thong thuong */
	printf("\nMang la : "); 
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
