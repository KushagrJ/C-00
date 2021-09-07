// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>
#include <stdbool.h>


int main(void)
{

    int inputNum;
    printf("Enter a positive integer (>1): ");
    scanf("%d", &inputNum);

    printf("Prime numbers less than or equal to %d :-\n", inputNum);
    printf("2");
    for (int a = 3; a <= inputNum; a++)
    {
        bool isPrime = true;

        for (int b = 2; b*b <= a; b++)
            if (a%b == 0)
                isPrime = false;

        if (isPrime == true)
            printf(", %d", a);
    }
    printf("\n");

    return 0;

}
