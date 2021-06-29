#include <stdio.h>

int main(){
	int day,month,lowtemp,hightemp,humidity;
	float temp;
	int highhumi, lowhumi;
	int a[12];
	int i, j;
	printf("day/month\tlowtemp-hightemp\thumidity\n");
	FILE *fin = fopen("thoitiet.txt", "r");
	while(fscanf(fin, "%d/%d\t%d-%d\t%d\n", &day, &month, &lowtemp, &hightemp, &humidity) != EOF){
		printf("%d/%d\t\t%d-%d\t\t\t%d\n", day, month, lowtemp, hightemp, humidity);
		temp += (lowtemp + hightemp);
	}
	printf("\nNhiet do trung binh nam = %.2f\n", temp / 24);	
	fclose(fin);
	return 0;
}
