#include <stdio.h>
#include <string.h>

int main(){
	FILE *in1 = fopen("F1.txt", "r");
	FILE *in2 = fopen("F2.txt", "r");
	if(in1 == NULL || in2 == NULL){
		perror("Khong the mo tep de doc.\n");
		return 1;
	}
	char str1[100], str2[100];
	fgets(str1, 100, in1);
	fgets(str2, 100, in2);
	fclose(in1);fclose(in2);
	FILE *out = fopen("F3.txt", "w+");
	strcat(str1, str2);
	fprintf(out, str1);
	fclose(out);
}
