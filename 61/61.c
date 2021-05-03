// C17 Standard

#include <stdio.h>


int main(void)
{

    double investmentOfDaphne = 100.0;
    double investmentOfDeirdre = 100.0;
    int numberOfYears = 0;

    printf("Daphne's investment = $100.00 (@ 10%% annual simple interest)\n");
    printf("Deirdre's investment = $100.00 (@ 5%% annual compound interest)\n");

    while (investmentOfDeirdre <= investmentOfDaphne)
    {
        numberOfYears += 1;
        investmentOfDaphne += 10.0;
        investmentOfDeirdre += investmentOfDeirdre/20.0;
    }

    printf("\nAfter %d years,\n"
           "Value of Daphne's investment = $%.2f\n"
           "Value of Deirdre's invesement = $%.2f\n",
           numberOfYears, investmentOfDaphne, investmentOfDeirdre);

    return 0;

}