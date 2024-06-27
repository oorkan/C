#include <stdio.h>

/* This time we use a for loop instead of while, and be sure that the program
exits when user presses Enter and generates a new-line character. The body of 
the for loop is empty, because all the work is done in the test and increment
parts. But the grammatical rules of C require that a for statement has a body.
The isolated semicolon, called a null statement, is there to satisfy that 
requirement. The && operator makes sure that both left and right sides of 
the test are satisfied at the same time, so c not equals EOF and c not equals
new-line character at the same time. When one of these tests fails, the program
exits. */

void main()
{
    int c;
    double numchars;

    numchars = 0;
    for ( numchars = 0; (c = getchar()) != EOF && c != '\n'; ++numchars );
    printf("%.0f\n", numchars);
}
