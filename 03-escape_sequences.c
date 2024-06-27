#include <stdio.h>

// Escape Sequences
// \n - newline character
// \t - tab
// \b - backspace
// \" - double quote
// \\ - backslash

void main()
{
    printf("\\n - ");
    printf("hello world\n");

    printf("\\t - ");
    printf("hello\tworld\n");

    printf("\\b - ");
    printf("\\b - hello\b world\n");

    printf("\\\" - ");
    printf("\"hello world\"\n");
}

