#include <stdio.h>

void nhapdayso(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n){
	int i;
	int max = a[0];
	for(i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}
int main(){
	int n;
	int a[100];
	printf("So luong phan tu cua mang la ");
	scanf("%d", &n);
	printf("\nMang da duoc nhap la ");
	nhapdayso(a, n);
	printf("\nMax of array is %d", max(a, n));

}
