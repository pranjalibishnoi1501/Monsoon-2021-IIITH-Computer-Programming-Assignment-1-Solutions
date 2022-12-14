#include <stdio.h>
#include <math.h>

void main(void)
{
    int a, b, c, d, e, f;

    printf("Enter a value of v1: ai + bj + ck: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Enter a value of v2: di + ej + fk: \n");
    scanf("%d %d %d", &d, &e, &f);

    printf("the dot product of v1 and v2 is %d: \n", a * d + b * e + c * f);
}