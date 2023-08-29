#include <stdio.h>

int average(int a, int b,int c)
{
  int averagee = (a + b+ c) /3;
  return averagee;
}

void average_1()
{
  int a;
  int b;
  int c;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
  printf("Enter the third number: ");
  scanf("%d", &c);

  
  printf("The average is %d\n", average(a,b,c));
}

int main()
{
  average_1();
  return 0;
}
