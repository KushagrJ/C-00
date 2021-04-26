// C17 Standard

#include <stdio.h>


int main(void)
{

    int count = 1;
    int sumOfSquares = 0;
    int max;

    printf("Enter a positive integer: ");
    scanf("%d", &max);

    while (count < max+1)
    {
        sumOfSquares = sumOfSquares+(count*count);
        count++;
    }

    printf("The sum of the squares of the first %d positive integers is %d\n",
           max, sumOfSquares);

    return 0;

}