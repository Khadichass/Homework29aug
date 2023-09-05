#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  int sum;
  int number = 324;

  a = number / 100;
  b = (number % 100) / 10;
  c = number % 10;

  sum = a + b + c;

  
  printf("%d\n", sum);

  return 0;
}
