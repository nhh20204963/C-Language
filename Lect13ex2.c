#include <stdio.h>

typedef struct phanso{
	float tuso;
	float mauso;
}PS;
void nhap(PS *ps, const char name);
PS calps(PS psA, PS psB, const char op);
void xuat(PS ps, const char name);

int main(){
	PS psA, psB, psC;
	int key;
	nhap(&psA, 'A');
	xuat(psA, 'A');
	nhap(&psB, 'B');
	xuat(psB, 'B');
	do{
		printf("\nCac phep toan");
		printf("\n1.Cong 2 phan so");
		printf("\n2.Tru 2 phan so");
		printf("\n3.Nhan 2 phan so");
		printf("\n4.Chia 2 phan so");
		printf("\n5.Thoat");
		printf("\nChon chuc nang ");
		scanf("%d", &key);
		switch(key){
			case 1:
				psC = calps(psA, psB, '+');
				xuat(psC, 'C');
				break;
			case 2:
				psC = calps(psA, psB, '-');
				xuat(psC, 'C');
				break;
			case 3:
				psC = calps(psA, psB, '*');
				xuat(psC, 'C');
				break;
			case 4:
				psC = calps(psA, psB, '/');
				xuat(psC, 'C');
				break;	
			case 5:
				break;
		}
	}while(key);
}
void nhap(PS *ps, const char name){
	printf("\nNhap tu so: ");
	scanf("%f", &ps->tuso);
	do{
		printf("\nNhap mau so: ");
		scanf("%f", &ps->mauso);
		if(ps->mauso == 0){
			printf("\nBan da nhap sai.Hay nhap lai");
		}
	}while(ps->mauso == 0);
}
void xuat(PS ps, const char name){
	printf("\nPhan so: %f / %f", ps.tuso, ps.mauso);
}
PS calps(PS psA, PS psB, const char op){
	PS psC;
	switch(op){
		case '+':
			psC.tuso = psA.tuso * psB.mauso + psA.mauso * psB.tuso;
			psC.mauso = psA.mauso * psB.mauso;
			break;
		case '-':
			psC.tuso = psA.tuso * psB.mauso - psA.mauso * psB.tuso;
			psC.mauso = psA.mauso * psB.mauso;
			break;
		case '*':
			psC.tuso = psA.tuso * psB.tuso;
			psC.mauso = psA.mauso * psB.mauso;
			break;
		case '/':
			psC.tuso = psA.tuso * psB.mauso;
			psC.mauso = psA.mauso * psB.tuso;
			break;
		default:
			printf("\nToan tu khong hop le");
	}
	return psC;
}

