#include <stdio.h>

/* It may also be possible to cope with even bigger numbers by using
a double (double precision float). printf uses %f for both float and 
double; %.0f suppresses printing of the decimal point and the fraction
part which is zero in our case. */

void main()
{
    int c;
    double numchars;

    numchars = 0;
    while ( ( c = getchar() ) != EOF ) {
        // omit new line chars
        if (c != '\n') {
            ++numchars;
        }
    }
    printf("%.0f\n", numchars);
}
