#include <stdio.h>
int main(){
	double a, b, c;
	printf("Nhap a = ");scanf("%lf", &a);
	printf("Nhap b = ");scanf("%lf", &b);
	printf("Nhap c = ");scanf("%lf", &c);
	double x = (c - b) / a;
	printf("Gia tri cua x = %.2lf", x);
	return 0;
}
