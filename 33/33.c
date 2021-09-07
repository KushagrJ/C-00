// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


int main(void)
{

    const float KM_PER_MILE = 1.609;
    const float L_PER_GALLON = 3.785;
    float milesTravelled, gallonsGasConsumed;

    printf("Enter the number of miles travelled: ");
    scanf("%f", &milesTravelled);

    printf("Enter the amount of gas consumed (in gallons): ");
    scanf("%f", &gallonsGasConsumed);

    printf("Miles per gallon: %.1f\n", milesTravelled/gallonsGasConsumed);
    printf("Litres per 100 kilometres: %.1f\n",
           (100*L_PER_GALLON*gallonsGasConsumed)/(KM_PER_MILE*milesTravelled));

    return 0;

}
