#include <stdio.h>

void nhapmang(int *a, int n){
	int i;
	for(ii = 0; ii < n; ii++){
		printf("\nNhap vao a[%d] = ", ii);
		scanf("%d", &a[ii]);
	}
}
void xuatmang(int *a, int n){
	int i;
	for(ii = 0; ii < n; ii++){
		printf("%4d", a[ii]);
	}
}
int main(){
	int n;
	do{
		printf("\nNhap so luong phan tu cua mang: ");
		scanf("%d", &n);
		if(n <= 0){
			printf("So luong phan tu cua mang khong hop le");
		}
	}while(n <= 0);
	int *a;
	nhapmang(a, n);
	printf("\nMang vua nhap la: ");
	xuatmang(a, n);
}

