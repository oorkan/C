#include <stdio.h>

#define GRAVITATIONAL_ACCELERATION 9.81
#define NEWTON "Isaac Newton"

// #define <name> <replacement text>
// A #define line defines a symbolic name or symbolic constant
// to be a particular string of characters.
// Thereafter, any occurance of name (not in quotes and not part of another name)
// will be replaced by the corresponding replacement text
// The name has the same for as a variable name: a sequence
// of letters and digits that begins with a letter.
// The replacement text can be any sequence of characters.
// Symbolic constant names are conventionally written in uppercase
// to be readily distinguished from lower case variable names.
// There should be NO semicolon at the end of a #define line 

void main()
{
    printf("\tIn physics, gravitational acceleration is the \
acceleration of an object in free fall within a vacuum, \
and equals to %.2f m/s².\n\n", GRAVITATIONAL_ACCELERATION);

    printf("\tWe know a lot about gravity from the works of \
the great scientist, sir %s.\n", NEWTON);
}
