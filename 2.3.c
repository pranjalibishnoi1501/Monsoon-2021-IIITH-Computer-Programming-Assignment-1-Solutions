#include <stdio.h>

void main(void)
{
    int a, b,c;

    printf("Enter a value of a: \n");
    scanf("%d", &a);
    printf("Enter a value of c: \n");
    scanf("%d", &c);

    for (b = 1; b <=c; b++)
    {
        printf("%d * %d = %d \n", a, b, a * b);
    }
}
