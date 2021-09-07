// C17 Standard

#include <stdio.h>


int main(void)
{

    short shortMinimum = -32767-1;
    short shortMaximum = 32767;
    unsigned short unsignedShortMaximum = 65535;
    int intMinimum = -2147483647-1;
    int intMaximum = 2147483647;
    unsigned int unsignedIntMaximum = 4294967295U;
    long longMinimum = -9223372036854775807L-1;
    long longMaximum = 9223372036854775807L;
    unsigned long unsignedLongMaximum = 18446744073709551615UL;
    long long longLongMinimum = -9223372036854775807LL-1;
    long long longLongMaximum = 9223372036854775807LL;
    unsigned long long unsignedLongLongMaximum = 18446744073709551615ULL;

    printf("The range of short on this system is %hd to %hd.\n",
           shortMinimum, shortMaximum);
    printf("The range of unsigned short on this system is %d to %hu.\n",
           0, unsignedShortMaximum);
    printf("The range of int on this system is %d to %d.\n",
           intMinimum, intMaximum);
    printf("The range of unsigned int on this system is %d to %u.\n",
           0, unsignedIntMaximum);
    printf("The range of long on this system is %ld to %ld.\n",
           longMinimum, longMaximum);
    printf("The range of unsigned long on this system is %d to %lu.\n",
           0, unsignedLongMaximum);
    printf("The range of long long on this system is %lld to %lld.\n",
           longLongMinimum, longLongMaximum);
    printf("The range of unsigned long long on this system is %d to %llu.\n",
           0, unsignedLongLongMaximum);

    return 0;

}





/* Trivia

 * On this system (i.e. Linux AMD64), the sizes of short, int, long and
   long long are 2 bytes, 4 bytes, 8 bytes and 8 bytes, respectively.
 * According to the C documentation,
   size(short) <= size(int) <= size(long) <= size(long long).
 * unsigned x; means unsigned int x;
 * short, int, long and long long are signed by default.
   [So, int x; means signed int x; - Similarly for others]
 * Normally, constants within int's range are of data type int. To make the
   compiler use such constants as unsigned int, long, unsigned long, long long
   or unsigned long long, suffixes u/U, l/L, ul/UL, ll/LL or ull/ULL should be
   used, respectively.
   [long x = (long) 1; is different from long x = 1L; as in the first case, the
    constant 1 is initially of data type int and is then converted to long, but
    in the second case, the constant 1 is of data type long to begin with.
    Similarly for others.]
   [Constants such as 3, 5.6, 'K', 5+7, etc. aren't stored in memory]
 * To print as octal and hexadecimal, %ho/%hx/%hX, %o/%x/%X, %lo/%lx/%lX or
   %llo/%llx/%llX should be used (for signed and unsigned, both).
 * -2147483648 is an expression: a positive long int expression 2147483648 with
   a unary operator (-) in front of it.
   Since 2147483648 is too large for int on this system, therefore the data type
   of the expression -2147483648 is long int, even though -2147483648 is
   within the range of int.
   Setting an int variable to -2147483648 would produce no errors or warnings,
   as the data type of -2147483648 would be implicitly converted from long int
   to int before the assignment, but that's a different matter.
   [Similarly for others]
 * Lowercase format specifiers should be used for various integer types other
   than %X.

 * Even though a short integer is promoted to an integer, the h modifier of
   printf() converts it back to a short integer before printing.
   [See 'Type conversions' in 34.c]

 */
