#include <stdio.h>

void main(void)
{
    int a, b=1;

    printf("Enter a value of a: \n");
    scanf("%d", &a);

    while(b <= 10)
    {
        printf("%d * %d = %d \n", a, b, a * b);
        b++;
    }
}
