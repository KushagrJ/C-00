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
        return fibonacci(n-1) + fibonacci(n-2);
}





/* Trivia - 87.c

 * Here, a double recursion is used, i.e. the function calls itself twice.
   If a function call such as fibonacci(40) is made, then the first level would
   allocate a variable n, the second level would allocate two more variables n,
   the third level would allocate four more variables n, and so on, making the
   number of variables grow exponentially. An exponential growth soon leads to
   the computer requiring an enormous amount of memory.
   Thus, recursion should be used cautiously, particularly when efficiency is
   important.

 * End of Trivia */
