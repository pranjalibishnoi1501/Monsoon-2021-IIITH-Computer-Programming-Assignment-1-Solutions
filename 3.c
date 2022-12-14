#include<stdio.h>
#include<math.h>

void main(void)
{
    int a,n;
    float sum=0, b=1
    ;sqrt;
    
    scanf("%d", &n);

    printf("Enter value of n: \n");

    for( a=1; a<=n; a++)
    {
        b= sqrt(a);
        sum= sum+b;
    }
    printf("summation of %d integers= %f", n, sum);
}