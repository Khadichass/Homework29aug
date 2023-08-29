#include <stdio.h>

int sum(int a, int b)
{
  int summ = a + b;
  return summ;
}

void sum_1()
{
  int a;
  int b;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  
  printf("The sum is %d\n", sum(a,b));
}

int main()
{
  sum_1();
  return 0;
}
