// C17 Standard
// Includes input validation

// Improve the input validation with scanf() to report invalidity when valid
// input isn't immediately followed by enter or EOF.
// For eg., input like 22KJ should be reported as invalid, instead of 22 being
// simply taken as the input and KJ being ignored.
// Also, the program should report invalidity for out of range values specific
// to different programs (for eg., in this program, the hours worked in a week
// should not be less than 0.0 or greater than 168.0).
// (Take all input as a string and then make the necessary checks & conversions)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


double get_valid_input(void);
bool flush(void);
double calculate_gross_pay(double hoursWorked);
double calculate_taxes(double grossPay);


int main(void)
{

    printf("Enter the no. of hours worked in a week: ");
    double hoursWorked = get_valid_input();

    double grossPay, taxes;

    grossPay = calculate_gross_pay(hoursWorked);
    taxes = calculate_taxes(grossPay);

    printf("Gross Pay = $%.2f\n", grossPay);
    printf("Taxes = $%.2f\n", taxes);
    printf("Net Pay = $%.2f\n", grossPay-taxes);

    return EXIT_SUCCESS;

}


double get_valid_input(void)
{

    double hoursWorked;
    bool endOfFile;

    int a;
    while (true)
    {
        a = scanf("%lf", &hoursWorked);
        endOfFile = flush();

        if (a == 1)
        {
            if (hoursWorked < 0.0)
                a = 0;
            else
                break;
        }

        if (a != 1 && endOfFile == true)
            exit(EXIT_FAILURE);

        printf("Invalid input!\n");
        printf("Enter the no. of hours worked in a week: ");
    }

    return hoursWorked;

}


bool flush(void)
{

    int f;
    while ((f = getchar()) != '\n' && f != EOF)
        continue;

    if (f == EOF)
    {
        printf("\n");
        return true;
    }
    else
        return false;

}


double calculate_gross_pay(double hoursWorked)
{
    if (hoursWorked > 40.0)
        return (10.0*40.0)+(1.5*10.0*(hoursWorked-40.0));
    else
        return hoursWorked*10.0;
}


double calculate_taxes(double grossPay)
{
    if (grossPay <= 300)
        return 0.15*grossPay;
    else if (grossPay <= 450)
        return (0.15*300)+(0.2*(grossPay-300));
    else
        return (0.15*300)+(0.2*150)+(0.25*(grossPay-450));
}
