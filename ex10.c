#include <stdio.h>

int remainders(int a, int b)
{
  int remainderr = a % b;
  return remainderr;
}

void remainder_1()
{
  int a;
  int b;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  
  printf("The remainder is %d\n", remainders(a,b));
}

int main()
{
  remainder_1();
  return 0;
}
