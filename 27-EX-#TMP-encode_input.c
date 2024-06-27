#include <stdio.h>

void main()
{
    int c;

    while ( (c = getchar()) != EOF ) {
        // Exit on Enter
        if ( c == '\n' ) { printf("\n"); break; }

        if ( c == '\t' ) {
            c = '\\'; putchar(c); c = 't';
        }

        if ( c == '\b' ) {
            c = '\\'; putchar(c); c = 'b';
        }

        if ( c == '\\' ) {
            c = '\\'; putchar(c); c = '\\';
        }

        putchar(c);
    }
}
