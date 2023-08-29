#include <stdio.h>

int subtraction(int a, int b)
{
  int subtractionn = a - b;
  return subtractionn;
}

void subtraction_1()
{
  int a;
  int b;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  
  printf("The sum is %d\n", subtraction(a,b));
}

int main()
{
    subtraction_1();
    return 0;
}
