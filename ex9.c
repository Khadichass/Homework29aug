#include <stdio.h>

int division(int a, int b)
{
  int divisionn = a / b;
  return divisionn;
}

void division_1()
{
  int a;
  int b;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  
  printf("The division is %d\n", division(a,b));
}

int main()
{
  division_1();
  return 0;
}
