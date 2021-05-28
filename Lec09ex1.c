#include <stdio.h>

int nhapso(int temp){
	scanf("%d", &temp);
	return temp;
}
int max(int a, int b){
	return (a > b ? a : b);
}
void main(){
	printf("Nhap 3 so lan luot la ");
	int num1 = nhapso(num1);
	int num2 = nhapso(num2);
	int num3 = nhapso(num3);
	int Ans = max(max(num1, num2), num3);
	printf("So lon nhat trong 3 so %d %d %d la %d", num1, num2, num3, Ans);
}
