//thay the ki tu bat ky trong chuoi bang ki tu moi

#include <stdio.h>
#include <string.h>

void repStr(char *s, char t, char k);

int main()
{
 char s[256];
 char t, k;
 printf("Nhap chuoi: ");
 gets(s);
 printf("\n Nhap ky tu can thay the: ");
 t = getchar();
 getchar();
 printf("\n Nhap ki tu thay the: ");
 k = getchar();


 if (strchr(s,t) == NULL){
     printf(" Khong co ki tu %c trong chuoi tren.\n", t);
 }else {

      repStr(s, t, k);
 }

 printf("Chuoi moi: %s \n",s);

}
void repStr(char *s, char t, char k)
{
	int i = 0;
     	
   for(i=0; s[i]; i++)
	{  
		if(s[i] == t)
		{
		   s[i] =  k;
	 
	    }
 
	}
	   
  
}