#include <stdio.h>

/* The character counting program accumulates its count in a long
variable instead of an int. long integers are at least 32 bits. Although
on some machines, int and long are the same size, on others an int is 16
bits, with a maximum value of 32767, and it would take relatively little
input to overflow an int counter. The conversion specification %ld tells
 printf that the corresponding argument is a long integer. */

void main()
{
    int c;
    long numchars;

    numchars = 0;
    while ( ( c = getchar() ) != EOF ) {
        // omit new line chars
        if (c != '\n') {
            ++numchars;
        }
    }
    printf("%ld\n", numchars);
}
