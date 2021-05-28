#include <stdio.h>

int main(){
	int n;
	int i, j;
	printf("Nhap n = ");
	scanf("%d", &n);
	float sum1 = 0, sum2 = 0;
	for(i = 0; i <= n; i = i + 2){
		sum1 += 1 / (2 * i + 1.00);
	}
	for(j = 1; j <= n; j = j + 2){
		sum2 += 1 / (2 * j + 1.00);
	}
	printf("%.2f", 4 * (sum1 - sum2));
}
