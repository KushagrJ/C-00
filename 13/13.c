// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


int main(void)
{

    int decimalInteger;

    printf("Enter a decimal integer value: ");

    scanf("%d", &decimalInteger);

    printf("It can also be written in octal and hexadecimal notations as "
           "%o and %x/%X, respectively.\n"
           "With C prefixes, they are %#o (for octal) and "
           "%#x/%#X (for hexadecimal).\n",
           decimalInteger, decimalInteger, decimalInteger,
           decimalInteger, decimalInteger, decimalInteger);

    return 0;

}





/* Trivia

 * There is no preset specifier to print a value in binary notation.
 * int a = 22; can also be written as int a = '\26'; (in octal form) or as
   int a = '\x16'; (in hexadecimal form), and so on.
 * %O is not a format specifier.

 * Another way to break a line in printf() is by using a \.

 */
