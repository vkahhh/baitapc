//Kiem tra tinh doi xung cua mang

#include <stdio.h>

void NhapMang(int *a, int *n) {
	*n = 0;

	while((*n <= 0) || (*n > 100)) {
		printf("Nhap so phan tu trong mang: ");
		scanf ("%d", n);
	}

	for(int i = 0; i < *n; i++) {
		printf("A[%d] = ", i);
		scanf ("%d", &a[i]);
	}

  for(int i = 0; i < *n; i++){
    printf("%4d", a[i]);
  }
}

int KT(int* a, int n) {

	for(int i = 0; i <= n/2; i++) {
		if(a[i] != a[n - 1 - i]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	int a[100];

	NhapMang(a, &n);

	if(KT(a, n) == 1) {
		printf("\nMang doi xung.\n");
	} else {
		printf("\nMang khong doi xung.\n");
	}
	return 0;
}