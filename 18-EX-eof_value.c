#include <stdio.h>

// In Unix-like systems, use Ctrl+D to detect EOF

void main()
{
    int c;
    c = getchar();
    if ( c == EOF ) {
        printf("%d\n", EOF);
    }
}
