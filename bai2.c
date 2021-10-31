//in ra so HEX

#include <stdio.h>
void main()
{
    int x;
    do {

        printf("Nhap x = ");
        scanf ("%d", &x);

    } while(x < 0);

    printf ("Ma HEX: Ox %x\n", x);
    
}
