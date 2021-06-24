#include <stdio.h>
 
typedef struct
{
	float real;
	float image; 
}SP;

void nhap(SP *comp, const char name);
SP calsp(SP compA, SP compB, const char op);
void xuat(SP comp, const char name);

int main(){
	SP compA, compB, compC;
	int key;
	nhap(&compA, 'A');
	xuat(compA, 'A');
	nhap(&compB, 'B');
	xuat(compB, 'B');
	do{
		printf("\n\n1. Cong 2 so phuc: C = A+B");
		printf("\n2. Tru 2 so phuc: C = A-B");
		printf("\n3. Nhan 2 so phuc: C = A*B");
		printf("\n4. Chia 2 so phuc: C = A/B");
		printf("\n5.Thoat");
		printf("\nBan chon: ");
		scanf("%d", &key);
		switch(key){
			case 1:
				compC = calsp(compA, compB, '+');
				xuat(compC,'C');
				break;
			case 2:
				compC = calsp(compA, compB, '-');
				xuat(compC, 'C');
				break;
			case 3:
				compC = calsp(compA, compB, '*');
				xuat(compC, 'C');
				break;
			case 4:
				compC = calsp(compA, compB, '/');
				xuat(compC, 'C');
				break;
			case 5:
				break;
		}
	}while(key);
}
void nhap(SP *complex, const char name){
	printf("\nPhan thuc: ");
	scanf("%f", &complex->real);
	printf("\nPhan ao: ");
	scanf("%f", &complex->image);
}
SP calsp(SP compA, SP compB, const char op){
	SP compC;
	switch(op){
		case '+': // A+B
		compC.real = compA.real + compB.real;
		compC.image = compA.image + compB.image;
		break;
		case '-': // A-B
		compC.real = compA.real - compB.real;
		compC.image = compA.image - compB.image;
		break;
		case '*': // A*B
		compC.real = compA.real*compB.real - compA.image*compB.image;
		compC.image = compA.real*compB.image + compA.image*compB.real;
		break;
		case '/': // A/B
		compC.real = (float)(compA.real*compB.real + compA.image*compB.image)/
		(compB.real*compB.real + compB.image*compB.image);
		compC.image = (float)(compA.image*compB.real - compA.real*compB.image)/
		(compB.real*compB.real + compB.image*compB.image);
		break;
		default:
		printf("\nToan tu khong hop le");
	}
	return compC;
}
 
void xuat(SP complex, const char name){
		if(complex.image > 0)
			printf("\nSo phuc %c: %0.2f + %0.2fi", name, complex.real, complex.image);
		else if(complex.image == 0)
			printf("\nSo phuc %c: %0.2f", name, complex.real);
		else
			printf("\nSo phuc %c: %0.2f - %0.2fi", name, complex.real, (-1)*complex.image);
}
