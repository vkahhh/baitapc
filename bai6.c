//phan tu xuat hien nhieu nhat trong mang

#include <stdio.h>

int a[100];

void main()
{
 int i, n, j, max, value, count;
 printf("Nhap so phan tu trong mang: \n");
 scanf("%d", &n);

 for (i = 0; i < n; i++)
 {
  printf("Phan tu A[%d]=", i + 1);
  scanf("%d", &a[i]);
 }

 printf("Mang vua nhap la: \n");

 for (i = 0; i < n; i++) printf(" %d ", a[i]);
 max = 1;

 for (i = 0; i < n; i++)
 {

  count = 0;

  for (j = 0; j < n; j++)
  {
   if (a[i] == a[j]) count++;
  }
 
  if (max < count)
  {
   max = count;
   value = a[i];
  }

 }
 
 printf("\n Phan tu xuat hien nhieu nhat trong mang tren la: %d voi %d lan xuat hien. \n", value, max);
 
}