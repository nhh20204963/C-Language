#include <stdio.h>

int main(){
	float a, b, x;
	printf("Nhap a = ");scanf("%f", &a);
	printf("Nhap b = ");scanf("%f", &b);
	if(a > b){
		x = (a + b) / 3 + b;
		printf("y = %.3f", 15.000 * x * x + x + 12.000);
	}else if(a = b){
		x = 15.172;
		printf("y = %.3f", 15.000 * x * x + x + 12.000);
	}else{
		x = (a - b) / (a * a + b * b);
		printf("y = %.3f", 15.000 * x * x + x + 12.000);
	}
}
