//tinh so lan xuat hien cua ki tu bat ky

#include <stdio.h>
#include <string.h>

int main()
{
 char s[256];
 char t;
 printf("Nhap chuoi: ");
 gets(s);
 printf("Nhap ky tu bat ky: ");
 scanf ("%c",&t);

 int dem = 0;
 for(int i = 0; i <= strlen(s); i++){
           if(s[i] == t) dem = dem + 1;
 }

 printf("So lan xuat hien ky tu %c la: %d \n", t, dem);

 return 0;
}