#include <stdio.h>

void main()
{
    int c; // Current input char
    int lc; // Last input char

    while ( (c = getchar()) != EOF ) {
        // Exit on Enter
        if ( c == '\n' ) { printf("\n"); break; }

        /*
            If last input character was blank and current input character is blank,
            then reassign the current input character
        */
        while (c == ' ' &&    lc == ' ' ) {
            c = getchar(); lc = c;
        }

        lc = c;
        putchar(c);
    }
}
