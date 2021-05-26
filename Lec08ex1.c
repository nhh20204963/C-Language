#include <stdio.h>

int main(){
	int n;
	int i;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i = 2; i <= n; i++){
		if(n % i == 0){
			printf("%d ", i);
			n /= i;
			if(n == i){
				printf("%d", i);
			}
		}

		}
	}

