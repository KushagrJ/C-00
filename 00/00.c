// C11 Standard

#include <stdio.h>


int main(void)
{

    printf("Hello, World!\n");

    return 0;

}



/* Trivia

 * #include <stdio.h> tells the compiler to include information found in the file stdio.h, which provides support for
   keyboard input & for displaying output, printf(), etc.
 * stdio.h stands for standard input/output header.
 * main() and printf() are functions. The parentheses identify them as function names.
 * A C program, with some exceptions, always begins execution with the function called main().
 * int indicates that main() returns an integer, which is 0 here.
 * void indicates that main() doesn't take any arguments. void is used to mean 'empty', not 'invalid'.
 * \n represents a single character called the newline character. It means to start a new line.
 * int is a C keyword identifying one of the basic C data types. For example, int can't be used as the name of a
   function or a variable.

 */