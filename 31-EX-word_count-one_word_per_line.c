#include <stdio.h>

void main()
{
    int c, numwords, is_inside_word;

    while ( (c = getchar()) != EOF ) {
        // Exit on Enter
        if ( c == '\n' ) { printf("\n"); break; }

        if ( c == ' ' || c == '\n' || c == '\t' ) {
            is_inside_word = 0;
        }
        else
            if ( is_inside_word == 0 ) {
                is_inside_word = 1;
                putchar('\n');
            }
            putchar(c);
    }
}
