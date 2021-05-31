// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


double calculate_gross_pay(double hoursWorked);
double calculate_taxes(double grossPay);


int main(void)
{

    double hoursWorked;
    printf("Enter the no. of hours worked in a week: ");
    scanf("%lf", &hoursWorked);

    double grossPay, taxes;

    grossPay = calculate_gross_pay(hoursWorked);
    taxes = calculate_taxes(grossPay);

    printf("Gross Pay = $%.2f\n", grossPay);
    printf("Taxes = $%.2f\n", taxes);
    printf("Net Pay = $%.2f\n", grossPay-taxes);

    return 0;

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
