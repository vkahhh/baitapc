//Tinh tong cac phan tu trong mang va ghi ra file
#include <stdio.h>
#include <math.h>

void TinhTong(int a[], int n) {

    FILE *fptr;
    fptr = fopen("/home/vk/Desktop/Baitap/bai10.txt","w");

    int *ptr;
    int tong = 0;
	while((n <= 0) || (n > 100)) {
		printf("Nhap so phan tu trong mang: ");
		scanf ("%d", &n);
	}

	for(int i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf ("%d", &a[i]);
	}

  for(int i = 0; i < n; i++){
    printf("%4d", a[i]);
  }

    ptr = a;
    for (int i = 0; i < n; i++) {
      tong = tong + *ptr;
      ptr++;
   }
    printf  ("\nTong cac phan tu trong mang: %d \n", tong);
    fprintf (fptr, "%d\n", tong);
    fclose  (fptr);
}
 

int main() {
   int n;
   int a[100];
   TinhTong(a, n);

}
