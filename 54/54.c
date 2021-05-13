// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


float calculate(float num1, float num2);


int main(void)
{

    float num1, num2;

    printf("Enter two numbers: ");

    while (scanf("%f %f", &num1, &num2) == 2)
    {
        printf("(%.2f-%.2f)/(%.2f*%.2f) = %.2f\n", num1, num2, num1, num2,
               calculate(num1, num2));
        printf("Enter two numbers (q to quit): ");
    }

    return 0;

}


float calculate(float num1, float num2)
{
    return (num1-num2)/(num1*num2);
}
