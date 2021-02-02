// C11 Standard

#include <stdio.h>

int main(void)
{
    char a;

    printf("Enter a character: ");

    scanf("%c", &a);

    printf("The ASCII code for %c is %d\n", a, a);

    return 0;
}

/*
 * The char type stores small integers and characters (such as letters and punctuation marks) as integers, according to a given code. The ASCII code is widely used, according to which the integer value 65 represents the character A, and so on.
 * The size of char is always 1 byte. The standard ASCII code runs numerically from 0 to 127, so char is large enough to encompass it.
 * The C language defines a byte to be the number of bits used by char, so one can have a system with 16-bit or 32-bit bytes, instead of the common 8-bit ones.
 * char = A; - The compiler thinks that A is a variable. char = "A"; - The compiler thinks that A is a string.
 * Character constants are also treated as int.
 * According to the ASCII code, char = 'A'; can also be written as char = 65; (in decimal form), char = '\101'; (in octal form) or char = '\x41'; (in hexadecimal form), and so on.
 * Escape sequences include \a (alert), \b (backspace), \n (newline), \t (horizontal tab), \v (vertical tab), \\ (backslash), \' (single quote), \" (double quote), \? (question mark), etc.
 * When a character, including escape sequences, is part of a string of characters enclosed in double quotes, it should not be enclosed in single quotes.
 * char isn't signed or unsigned by default.
 * The _Bool type stores 1 (true) or 0 (false). Its size is 1 bit.
 */