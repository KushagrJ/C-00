// C17 Standard

#include <stdio.h>


int main(void)
{

    int num1, num2;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &num1, &num2);

    while (num1 < num2)
    {
        int sum = 0;
        for (int i = num1; i <= num2; i++)
            sum += i*i;

        printf("The sums of the squares from %d to %d is %d\n", num1*num1,
               num2*num2, sum);

        printf("Enter next set of limits: ");
        scanf("%d %d", &num1, &num2);
    }

    printf("Done\n");

    return 0;

}