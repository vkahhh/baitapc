//Dao nguoc chu so trong 1 so

#include <stdio.h>


int DaoNguoc(int n){ 
  int soDao = 0; 
  while (n > 0) {
    soDao = soDao * 10 + n % 10;
    n /= 10;
  }
  return soDao;
}

int main(void){
    int n;
 
    printf("Nhap so n: ");
    scanf ("%d",&n);
    if(n <0) printf("Nhap lai.\n");
    
    else {
    int a = DaoNguoc(n);
    printf("So dao nguoc cua n: %d\n", a);
    }
    return 0;
}
