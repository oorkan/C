#include <stdio.h>

// In C, all variables must be declared before they are used.
// The range of both int and float depends on the machine that's used
// 16-bit ints lie between [-32768, +32767] and are common
// 32-bit ints are common too
// A float number is typically a 32-bit quantity, with at lease six significant digits
// and magnitude generally between about 10(e-38) and 10(e+38)

/* some basic data types in C

    char        character - a single byte
    short     short integer
    int         integer
    long        long integer
    double    double-precision floating point
    float     floating point

*/

// The sizes of basic data types in C are machine-dependent
// The reason of multiplying by 5 then deviding by 9 instead of 
// just multiplying by 5/9 is that in C, as in many other languages,
// integer division truncates, so 5/9 would be equal to 0


void main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 10;

    fahr = lower;
    printf("\n°F\t°C\n");
    printf("---------------\n\n");
    while (fahr <= upper) {
        celsius = 5 * ( fahr - 32 ) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
