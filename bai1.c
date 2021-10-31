//Tim trong nguyen cua S= 1+(1/2)+...+(1/n)

#include <stdio.h>

void main()
{
    int   n;
    float S = 0;
    do
    {
        printf("Nhap n: ");
        scanf ("%d", &n);
        if(n < 1)
        {
            printf("Nhap lai.\n");
        }

     } while (n < 1);
    
        for (int i = 1; i <= n; i++){
            S = S + 1/(float)i;
        }
        printf("Tong S = %f\n", S);
    
}
