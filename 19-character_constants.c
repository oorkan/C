#include <stdio.h>

/* A character written between single quotes represents
an integer value equal to the numerical value of the character
in the machine's character set. This is called a character
constant, altough it is just another way to write a small
integer. For example, 'J' is a character constant; in the 
ASCII character set its value is 74, the internal representation
of character J. 'J' is to be preferred over 74; its meaning
is obvious, and it's independent of a particular character
set. The escape sequences used in string constants are also
legal in character constants, so '\n' stands for the value
of newline character which is 10 in ASCII. One should note
carefully that '\n' is a single character; and in expressions
is just an integer; on the other hand, "\n" is a string constant
that happens to contain only one character. */

void main()
{
    printf("%d\t%s\n", 'J', "J");
    printf("%d\t%s\n", 'o', "o");
    printf("%d\t%s\n", 'h', "h");
    printf("%d\t%s\n", 'n', "n");
    printf("%d\t%s\n", 'i', "i");
    printf("%d\t%s\n", 's', "s");
    printf("%d\t%s\n", '4', "4");
    printf("%d\t%s\n", '0', "0");
    printf("%d\t%s\n", '\n', "\\n");
}
