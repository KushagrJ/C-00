// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


int main(void)
{

    int first, second;

    printf("This program computes moduli.\n");

    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &second);

    printf("Now enter the first operand: ");
    scanf("%d", &first);

    while (first > 0)
    {
        printf("%d%%%d is %d\n", first, second, first%second);

        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &first);
    }

    printf("Done\n");

    return 0;

}
