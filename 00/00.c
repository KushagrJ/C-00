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

 * Header files generally contain only the prototypes (i.e. the declarations) of
   functions, among  other things, and not the functions' definitions.
   Thus, for eg., programs can run without having #include <stdio.h>, and many
   compilers would only issue a warning, and not an error.
   [According to the C Standard, not prototyping/defining a function before its
    first use (for eg., omitting #include <stdio.h>) is no longer valid.
    Thus, compilers are free to give an error, instead of simply a warning.]
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
   [In a hosted environment, C defines the entry point to be main(). However, in
    a freestanding environment, the entry point can have some other name, but
    it would make the code implementation-defined and non-portable.
    https://stackoverflow.com/q/30825151]
   [Also, one can make it seem like the main() function is not used in a program
    by using the #define preprocessor directive (#define kushagr main or
    #define kushagr m##a##i##n or some other trick), but after preprocessing,
    the code would still have the main() function.]
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


 * The POSIX standard defines a line as a sequence of zero or more non-newline
   characters plus a terminating newline character.
   Therefore, lines not ending in a newline character aren't considered actual
   lines. This is the reason why text files should terminate with a newline, as
   some programs might have problems processing the last line of a file that
   isn't newline terminated.

 * Although GCC is perfectly able to handle non-newline-terminated files, it
   still used to warn about it because it had to due to the C standard.
   After C++11, GCC no longer warns about this.

 * An example of a problem that can arise if there is no newline at the end of
   text files :-
   According to the C standard, the #include preprocessor directive inserts the
   file as it is, without inserting any newlines. So, without the #include file
   ending with a newline character, its last line will combine with the first
   line of the source file. Now, if the last line of the #include file is a
   single-line comment, then the first line of the source file will also become
   a comment, causing a problem.
   [To be manually verified]

 */
