#include <stdio.h>

int main(){
	int i, n;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(i % 3 == 2 && i % 5 == 3){
			printf("%d ", i);
		}
	}
}
