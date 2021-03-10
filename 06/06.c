// C17 Standard

#include <stdio.h>


int main(void)
{

    int ageInYears, ageInDays;

    ageInYears = 19;
    ageInDays = 365*ageInYears;

    printf("I'm %d years old. %d years is equal to %d days.\n",
           ageInYears, ageInYears, ageInDays);

    return 0;

}