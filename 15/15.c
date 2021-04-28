// C17 Standard

#include <stdio.h>


int main(void)
{

    char a;

    printf("Enter a character: ");

    scanf("%c", &a);

    printf("The ASCII code for %c is %hhd\n", a, a);

    return 0;

}





/* Trivia

 * The char type stores small integers and characters (such as letters and
   punctuation marks) as integers, according to a given code. The ASCII code is
   widely used, according to which the integer value 65 represents the character
   A, and so on.
   [48 to 57 - 0 to 9; 65 to 90 - A to Z; 97 to 122 - a to z]
 * The size of char is always 1 byte. The standard ASCII code runs numerically
   from 0 to 127, so char is large enough to encompass it.
 * The C language defines a byte to be the number of bits used by char, so one
   can have a system with 16-bit or 32-bit bytes, instead of the common 8-bit
   ones.
 * char = A; - The compiler thinks that A is a variable.
   char = "A"; - The compiler thinks that A is a string.
 * Character constants are also treated as int.
 * According to the ASCII code, char = 'A'; can also be written as
   char = 65; (in decimal form), char = '\101'; (in octal form) or
   char = '\x41'; (in hexadecimal form), and so on.
 * Escape sequences include \a (alert), \b (backspace), \n (newline),
   \t (horizontal tab), \v (vertical tab), \\ (backslash), \' (single quote),
   \" (double quote), \? (question mark), etc.
 * When a character, including escape sequences, is part of a string of
   characters enclosed in double quotes, it should not be enclosed in single
   quotes.
 * char isn't signed or unsigned by default.
 * The _Bool type stores 1 (true) or 0 (false). Its size is 1 bit.

 * Even though a char is promoted to an integer (i.e. the ASCII value of the
   character), the hh modifier of printf() converts it back to a char before
   printing.
   [See 'Type conversions' in 34.c]

 */