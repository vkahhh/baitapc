//in ra phan tu am

#include <stdio.h>

#define MAX 100 
 
void main()
{
    float array[MAX];
    int   n;
    do
    {
        printf("\n Nhap tong so phan tu trong mang: \n");
        scanf ("%d", &n);
    }
    while (n > MAX);
 
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf ("%f", &array[i]);
    } 
 
   printf("Phan tu am cua mang: ");
    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
            printf("\n A[%d] = %f", i, array[i]);
    }
    
}
