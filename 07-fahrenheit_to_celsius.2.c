#include <stdio.h>

// right-justification of printed output can be achieved by
// setting a width of a print-argument, like %3d, %4s

// unicode characters can be printed by using the correct Unicide
// code. For example, to print degree sign do \u00B0

void main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 10;

    fahr = lower;
    printf("\n%4s\t%4s\n", "\u00B0F", "\u00B0C");
    printf("---------------\n\n");
    while (fahr <= upper) {
        celsius = 5 * ( fahr - 32 ) / 9;
        printf("%3d\t%3d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
