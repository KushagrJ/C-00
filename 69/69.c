// C17 Standard

#include <stdio.h>


int main(void)
{

    int input;

    int numberOfEven = 0;
    long sumOfEven = 0L;
    double averageOfEven;

    int numberOfOdd = 0;
    long sumOfOdd = 0L;
    double averageOfOdd;

    printf("Enter integers (0 to stop) :-\n");

    while (scanf("%d", &input) == 1 && input != 0)
    {
        if (input%2 == 0)
            numberOfEven++, sumOfEven += input;
        else
            numberOfOdd++, sumOfOdd += input;
    }

    averageOfEven = (double) (sumOfEven) / (double) (numberOfEven);
    averageOfOdd = (double) (sumOfOdd) / (double) (numberOfOdd);

    printf("Number of even integers = %d\n", numberOfEven);
    printf("Average value of the even integers = %.2f\n", averageOfEven);
    printf("Number of odd integers = %d\n", numberOfOdd);
    printf("Average value of the odd integers = %.2f\n", averageOfOdd);

    return 0;

}