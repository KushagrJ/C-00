// C17 Standard

#include <stdio.h>


int main(void)
{

    double moneyInAccount = 1000000.0;
    int numberOfYears = 0;

    while (moneyInAccount > 0)
    {
        numberOfYears += 1;
        moneyInAccount += (moneyInAccount*8.0)/100.0;
        moneyInAccount -= 100000.0;
    }

    printf("It will take %d years for Chuckie to empty his account\n",
           numberOfYears);

    return 0;

}
