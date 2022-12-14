#include <stdio.h>

float dotproduct;
float sum=0;

#define N 3
void main(void)
{
    int i;
    int A[N];
    int B[N];

    for (i = 0; i < 3; i++)
    {
        printf("Enter value for A[%d]]:", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("Enter value for B[%d]]:", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 3; i++)
    {
        dotproduct = A[i] * B[i];
        sum = sum + dotproduct;
    }

    printf("%f \n", sum);
}