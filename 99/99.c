// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


long fibonacci(int n);


int main(void)
{

    int n;
    printf("Enter the number of terms of the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("0");
    for (int i = 2; i <= n; i++)
        printf(", %ld", fibonacci(i));
    printf("\n");

    return 0;

}


long fibonacci(int n)
{

    if (n < 3)
        return n-1;

    else
    {
        long i = 0;
        long j = 1;
        long fibonacci;

        for (int count = 3; count <= n; count++)
            fibonacci = i+j, i = j, j = fibonacci;

        return fibonacci;
    }

}
