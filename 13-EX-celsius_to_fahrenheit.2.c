#include <stdio.h>

// This time using a for loop

void main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -50;
  upper = 100;
  step = 5;

  celsius = lower;
  printf("\n%4s\t%7s\n", "\u00B0C", "\u00B0F");
  printf("----------------\n\n");
  for (celsius = lower; celsius <= upper; celsius += step) {
    fahr = ( ( 9.0/5.0 ) * celsius ) + 32;
    printf("%3.0f\t%6.0f\n", celsius, fahr);
  }
}