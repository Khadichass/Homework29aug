#include <stdio.h>

int time(int totalS, int *hour, int *minute, int *sec)
{
  *hour = totalS / 3600;
  totalS %= 3600;
  *minute = totalS / 60;
  *sec = totalS % 60;
}

void time_ask()
{
  int totalS;
  int hour = 0;
  int minute = 0;
  int sec = 0;

  printf("Enter the amount of seconds: ");
  scanf("%d", &totalS);

  time(totalS, &hour, &minute, &sec);

  printf("Hours: %d\n", hour);
  printf("Minutes: %d\n", minute);
  printf("Seconds: %d\n", sec);
}

int main()
{
  time_ask();
  return 0;
}
