#include <stdio.h>

void nhapdayso(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap vao phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n){
	int i;
	int max = a[0];
	for(i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
			return max;
		}
	}
}
int main(){
	int n;
	int a[100];
	printf("Nhap so n = ");
	scanf("%d", &n);
	nhapdayso(a, n);
	printf("Max array = %d", max(a, n));
	return 0;
}
