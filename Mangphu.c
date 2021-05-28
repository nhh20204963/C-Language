#include <stdio.h>


void nhapmang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu a[%d] ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void mangphu(int a[], int b[], int n, int &m){
	int i;
	for(i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			b[m] = a[i];
			m++;
		}
	}
}
int main(){
	int a[100];
	int n;
	do{
		printf("\nNhap so luong phan tu cua mang: ");
		scanf("%d", &n);
		if(n <= 0 || n > 100){
			printf("\nSo luong phan tu khong hop le");
		}
	}while(n <= 0 || n > 100);
	int b[100];
	int m;
	printf("\nNHAP MANG\n");
	nhapmang(a, n);
	printf("\nXUAT MANG\n");
	xuatmang(a, n);
	mangphu(a, b, n, m);
	printf("\nMANG PHU B CUA A");
	xuatmang(b, m);
} 
