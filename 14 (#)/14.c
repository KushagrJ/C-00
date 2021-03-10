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

 * On this system (i.e. Linux AMD64), the sizes of short, int, long and long long are 2 bytes, 4 bytes, 8 bytes and
   8 bytes, respectively.
 * According to the C documentation, size(short) <= size(int) <= size(long) <= size(long long).
 * short, int, long and long long are signed by default.
 * Normally, constants within int's range are stored as int. To make the compiler store such constants as unsigned int,
   long, unsigned long, long long or unsigned long long, suffixes u/U, l/L, ul/UL, ll/LL or ull/ULL should be used,
   respectively.
 * To print as octal and hexadecimal, %ho/%hx/%hX, %o/%x/%X, %lo/%lx/%lX or %llo/%llx/%llX should be used (for signed
   and unsigned, both).
 * intMinimum is set to be -2147483647-1 instead of -2147483648, because -2147483648 is not a number (C does not support
   negative literal values). -2147483648 is actually an expression: a positive literal value 2147483648 with a unary
   operator (-) in front of it. Since 2147483648 is too large for int, therefore -2147483648 is stored as long, instead
   of int. [Similarly for others]
 * Lowercase format specifiers should be used for various integer types.

 */