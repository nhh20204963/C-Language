#include <stdio.h>

void nhapheso(int a[2][2]){
	int i, j;
	for(i = 1; i <= 2; i++){
		for(j = 1; j <= 2; j++){
			printf("\na[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void hesotudo(int c[2]){
	int i;
	for(i = 1; i <= 2; i++){
		printf("\nc[%d] = ", i);
		scanf("%d", &c[i]);
	}
}
int main(){
	int a[2][2], c[2];
	float D, Dx, Dy, x, y;
	nhapheso(a);
	hesotudo(c);
	printf("\nHe phuong trinh da cho la ");
	printf("\n   %d * x + %d * y = %d", a[1][1], a[1][2], c[1]);
	printf("\n   %d * x + %d * y = %d", a[2][1], a[2][2], c[2]);
	D = a[1][1] * a[2][2] - a[1][2] * a[2][1];
	Dx = c[1] * a[2][2] - c[2] * a[1][2];
	Dy = a[1][1] * c[2] - a[2][1] * c[1];
	if(D == 0){
		if(Dx + Dy == 0){
			printf("\nHe phuong trinh da cho co vo so nghiem");
		}else{
			printf("\nHe phuong trinh da cho vo nghiem");
		}
	}else{
		x = Dx / D;
		y = Dy / D;
		printf("\nHe phuong trinh co nghiem (x, y) = (%.2f, %.2f)", x, y);
	}
	return 0;
}
