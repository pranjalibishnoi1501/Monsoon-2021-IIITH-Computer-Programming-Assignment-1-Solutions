#include<stdio.h>

void main(void)
{
  int a,b,c;

  printf("Enter value of integer a: \n");
  scanf("%d", &a);
  printf("Enter value of integer b: \n");
  scanf("%d",&b);
  printf("Enter value of integer c: \n");
  scanf("%d",&c);

  

  if( a * a + b * b == c * c)
  {
    printf("Numbers form a pythagorean triplet. \n");
  }
  else
  {
      printf("Numbers do not form a pythagorean triplet. \n");
  }
}