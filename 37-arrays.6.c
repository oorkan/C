#include <stdio.h>

void main()
{
    int c, i, nwhite, nother;
    int ndigit[10];
    int len = ( sizeof(ndigit) / sizeof(int) );

    nwhite = nother = 0;
    for (i = 0; i < len; ++i) ndigit[i] = 0;

    while ( (c = getchar()) != EOF )
        if (c >= '0' && c <= '9') ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t') ++nwhite;
        else ++nother;

    printf("digits =");

    for (i = 0; i < len; ++i) printf(" %d", ndigit[i]);

    printf(", white space = %d, other = %d\n", nwhite, nother);
}
