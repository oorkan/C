#include <stdio.h>

// If an arithmetic operator has integer operands, an
// integer operation is performed.
// If an arithmetic operator has one floating-point operand
// and one integer operand, however, the integer will be
// converted to floating-point before the operation is done.
// In the following example, int1 is converted to 4.0 before
// the float1 * int1 multiplication operation is done 

void main()
{
    float float1;
    int int1;

    float1 = 2.5;
    int1 = 4;

    printf("2.5 multiplied by 4 equals: %.1f\n", float1 * int1);
}
