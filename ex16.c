#include <stdio.h>

int square(int a)
{
  int squaree = a * a;
  return squaree;
}

void square_1()
{
  int a;
 
  printf("Enter the first number: ");
  scanf("%d", &a); 
  
  printf("The square is %d\n", square(a));
}

int main()
{
  square_1();
  return 0;
}
