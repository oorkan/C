#include <stdio.h>

// In Unix-like systems, use Ctrl+D to detect EOF

void main()
{
    int c;
    c = getchar();
    printf("%d\n", (c != EOF));
}
