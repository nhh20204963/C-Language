#include <stdio.h>
const int MAX_SIZE = 100;
void NhapMang(int a[], int n)
{	
	int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
} 
int Sum(int a[], int n)
{	
	int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
            sum += a[i];
    }
    return sum;
}
int max(int a[], int n)
{	
	int i;
    int max = a[0];
    for (i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
int main()
{
    int arr[MAX_SIZE];
 
    int n; 
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
    NhapMang(arr, n);
    printf("\nTong  = %d", Sum(arr, n));
    max(arr, n);
    printf("\nMax = %d", max(arr, n));
}
