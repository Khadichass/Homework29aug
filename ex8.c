#include <stdio.h>

int multiplication(int a, int b)
{
  int multiplicationn = a * b;
  return multiplicationn;
}

void multiplication_1()
{
  int a;
  int b;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  
  printf("The multiplication is %d\n", multiplication(a,b));
}

int main()
{
  multiplication_1();
  return 0;
}
