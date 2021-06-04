// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


void to_base_n(long num, int base);


int main(void)
{

    long num;
    int base;

    printf("Enter a non-negative integer and a base (2-10): ");
    scanf("%ld %d", &num, &base);

    printf("%ld in base %d: ", num, base);
    to_base_n(num, base);
    putchar('\n');

    return 0;

}


void to_base_n(long num, int base)
{

    if (num >= base)
        to_base_n(num/base, base);

    printf("%ld", num%base);

}
