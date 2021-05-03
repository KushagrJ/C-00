// C17 Standard

#include <stdio.h>


int main(void)
{

    printf("Hello, World!\n");

    return 0;

}





/* Trivia

 * #include <stdio.h> tells the compiler to include information found in the
   file stdio.h, which provides support for keyboard input & for displaying
   output, printf(), etc.
 * stdio.h stands for standard input/output header.

 * Header files generally contain only the declarations of functions, among
   other things, and not the functions' definitions.
 * The compiler (or more specifically, the preprocessor) essentially copies and
   pastes the entire contents of the respective header files in place of the
   lines such as #include <stdio.h> during compilation.
 * The actual definitions of functions like printf() are given in the C Standard
   Library, which is basically a collection of important object files (i.e.,
   the files created by the assembler right before the linking part of the
   compilation process).
   The source files corresponding to these important object files are generally
   not available directly.
 * It is the job of the linker to create a bridge between various object files,
   libraries, etc. and finally create the executable files.

 * main() and printf() are functions. The parentheses identify them as the names
   of functions.
 * A C program, with some exceptions, always begins execution with the function
   called main().
 * int indicates that main() returns an integer, which is 0 here.
 * void indicates that main() doesn't take any arguments. void is used to mean
   'empty', not 'invalid'.
 * \n represents a single character called the newline character. It means to
   start a new line.
 * int is a C keyword identifying one of the basic C data types. For example,
   int can't be used as the name of a function or a variable.

 * Previously, writing just main() was allowed. But, under the current C
   standard, int main() or void main() has to be used.
   Although void main() is valid, it should not be used.
 * function() means that the function can take any number of arguments, whereas
   function(void) means that the function can take zero arguments.
   In the case of main(), it doesn't matter either way in most cases, unless
   the user writes their own call to main(), etc.

 */