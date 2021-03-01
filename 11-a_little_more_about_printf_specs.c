#include <stdio.h>

// printf specs include:
// %d for digit
// %f for float
// %c for character
// %s for character string
// %o for octal
// %x for hexademical
// %% for % itself

void main()
{
  int int1 = 10;
  float float1 = 1.3;
  int char1 = 76;
  char str1[] = "John Doe";
  int oct1 = 010;
  int hex1 = 0x10;

  printf("\n");
  printf("\tI'm an integer and my value is %d\n", int1);
  printf("\tI'm a floating-point number and my value is %.1f\n", float1);
  printf("\tI'm a character and my value is %c\n", char1);
  printf("\tI'm a string and my value is %s\n", str1);
  printf("\tI'm an octal number and my value in octal is %o and in decimal is %d\n", oct1, oct1);
  printf("\tI'm a hexademical number and my value in hex is %x and in decimal is %d\n", hex1, hex1);
  printf("\tI'm a percent sign and my value is %%\n"); 
  printf("\n");
}