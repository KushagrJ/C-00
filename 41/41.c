// C17 Standard

#include <stdio.h>


int main(void)
{

    int count = 1;
    int sum = 0;
    int max;

    printf("Enter a positive integer: ");
    scanf("%d", &max);

    while (count < max+1)
    {
        sum = sum+count;
        count++;
    }

    printf("The sum of the first %d positive integers is %d\n", max, sum);

    return 0;

}