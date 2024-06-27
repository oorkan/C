#include <stdio.h>

void main()
{
    int c;
    double numspaces, numtabs, numlines;
    numspaces = 0;
    numtabs = 0;
    numlines = 0;

    while ( (c = getchar()) != EOF ) {
    	if ( c == '\n' ) ++numlines;
    	if ( c == ' ' ) ++numspaces;
    	if ( c == '	' ) ++numtabs;
    }
    printf("Spaces: %.0f\n", numspaces);
    printf("Tabs: %.0f\n", numtabs);
    printf("Lines: %.0f\n", numlines);
}
