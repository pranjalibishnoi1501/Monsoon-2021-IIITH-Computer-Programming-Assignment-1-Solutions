#include <stdio.h>
int main()
{
    int n1, n2, i;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 2; i <= n1 && i <= n2; i++)
    {
        printf( "%d %d", n1, n2);
       
        if (n1 % i == 0 && n2 % i == 0)
        {
            printf("numbers are not coprime. \n");
            return 0;
        }
        else
        {
            printf(" numbers are comprime. \n");
        }
    }

    return 0;
}
