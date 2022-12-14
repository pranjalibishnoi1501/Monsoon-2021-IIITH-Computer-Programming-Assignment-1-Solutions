#include <stdio.h>

void main(void)
{
    int a, b;

    printf("Enter a value of a: \n");
    scanf("%d", &a);
start:
    b = 1;
    b <= 10;
    b++;
    {
        printf("%d * %d = %d \n", a, b, a * b);
    }
goto start;
}
