// C17 Standard

#include <stdio.h>
#include <stdlib.h> // For the use of exit().

#define BASIC_PAY_RATE 10.0
#define OVERTIME_HOURS 40.0


double get_valid_input(void);
_Bool flush(void);
//double calculate_gross_pay(double hoursWorked);
//double calculate_taxes(double grossPay);


int main(void)
{

    double hoursWorked = get_valid_input();
    printf("Hours worked = %.2f\n", hoursWorked);
    //double grossPay, taxes;

    //grossPay = calculate_gross_pay(hoursWorked);
    //taxes = calculate_taxes(grossPay);

    return 0;

}


double get_valid_input(void)
{

    double hoursWorked;
    _Bool endOfFile;

    int a;
    while (printf("Enter the no. of hours worked in a week: "),
           (a = scanf("%lf", &hoursWorked)) != 1)
    {
        endOfFile = flush();
        if (endOfFile == 1)
            break;
    }

    // a != 1 is true only when the user simulates end of file without giving a
    // double-valued input.
    if (a != 1)
        exit(EXIT_FAILURE);
    else
        endOfFile = flush();

    if (hoursWorked < 0 && endOfFile == 1)
        exit(EXIT_FAILURE);
    else if (hoursWorked < 0 && endOfFile != 1)
        hoursWorked = get_valid_input();

    return hoursWorked;

}


_Bool flush(void)
{

    int f;
    while ((f = getchar()) != '\n' && f != EOF)
        continue;

    if (f == EOF)
    {
        printf("\n");
        return 1;
    }
    else
        return 0;

}
