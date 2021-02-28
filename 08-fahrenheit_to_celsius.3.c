#include <stdio.h>

// To get more accurate results in our Fahrenheit-Celsius conversion program,
// we need to use floats instead of integers
// Now you can multiply by 5/9 directly instead of multiplying by 5 then dividing by 9
// like in the previous example (5/9 with integers will truncate to 0, as you remember)
// A decimal point in a constant indicates that it's a floating point
// so 5.0/9.0 is not truncated because it's the ratio of two floating point values

void main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;
  printf("\n%4s\t%7s\n", "\u00B0C", "\u00B0F");
  printf("----------------\n\n");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * ( fahr - 32 );
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}