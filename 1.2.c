#include<stdio.h>

int main()
{
    int N;
    int noof_pythatriplets=1;
    int hypo;

    printf("Enter N: \n");
    scanf("%d", &N);

    printf("Enter value of hypotenuse: \n");
    scanf("%d", &hypo);

    hypo=1;
    while(noof_pythatriplets <= N)
    {
        // check if hypo is a hypotenuse

        for(int a=1; a<hypo; ++a)
        {
            for(int b=a; b<hypo; ++b)
            {
                if(a * a + b * b == hypo * hypo)
                {
                    noof_pythatriplets++;
                    printf("Triplet %d: a = %d b = %d hypo = %d\n", noof_pythatriplets, a, b, hypo);
                
                }
            }
        }
        hypo++;
    }
    return 0;
}