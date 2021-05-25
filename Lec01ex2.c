#include <stdio.h>
/* min tuong tu nhu max */
int main(){
	float a, b, c;
	printf("Nhap a = ");scanf("%f", &a);
	printf("Nhap b = ");scanf("%f", &b);
	printf("Nhap c = ");scanf("%f", &c);
	float max = a;
	if(b > a){
		if(b > c){
			printf("Max a, b, c = %.2f", b);
		}else{
			printf("Max a, b, c = %.2f", c);
		}
	}
		else{
		if(c > a){
			printf("Max a, b, c = %.2f", c);
		}else{
			printf("Max a, b, c = %.2f", a);
		}
	}
}
