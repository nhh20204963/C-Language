#include <stdio.h>
	
int main(){
	float a, b, c;
	printf("Nhap a = ");scanf("%f", &a);
	printf("Nhap b = ");scanf("%f", &b);
	printf("Nhap c = ");scanf("%f", &c);
	float max = a;
	if(b > a){
		if(b > c){
			printf("Max %.2f, %.2f, %.2f = %.2f", a, b, c, b);
		}else{
			printf("Max %.2f, %.2f, %.2f = %.2f", a, b, c, c);
		}
	}
		else{
		if(c > a){
			printf("Max %.2f, %.2f, %.2f = %.2f", a, b, c, c);
		}else{
			printf("Max %.2f, %.2f, %.2f = %.2f", a, b, c, a);
		}
	}
}
