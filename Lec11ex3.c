#include <stdio.h>
 
int main()
{
    int arr[100];
    int n;
    int i;
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    } while (n < 1);
 
    int *vPtr = &arr[0];
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", (vPtr + i));
    }
    int k;
    if(k >= 0 || k < n){
    printf("Vi tri con tro tro den la : ");
    scanf("%d", &k);
	}	
	printf("Gia tri con tro tro den la a[%d] = %d", k - 1, *(vPtr + k - 1));
	
	printf("\nDia chi duoc tham chieu boi vPtr + 3 la = %d ", (vPtr + 3));
}
