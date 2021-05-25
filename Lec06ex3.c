#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	float x, delta;
	printf("Nhap a = ");scanf("%f", &a);
	printf("Nhap b = ");scanf("%f", &b);
	printf("Nhap c = ");scanf("%f", &c);
	printf("Phuong trinh %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
	delta = b * b - 4 * a * c;
	if(delta > 0){	
		printf("Phuong trinh co 2 nghiem la %.2f va %.2f", (-b + sqrt(delta)) / ( 2 * a), (-b - sqrt(delta)) / ( 2 * a));
	}else if(delta == 0){
		printf("Phuong trinh co 1 nghiem duy nhat la %.2f", -b / (2 * a));
	}else{
		printf("Phuong trinh vo nghiem");
	}
	return 0;
}
