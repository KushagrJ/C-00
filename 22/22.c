// C17 Standard

#include <stdio.h>


int main(void)
{

    float MASS_PER_MOLECULE_OF_WATER = 3.0e-23;
    float MASS_PER_QUART_OF_WATER = 950;
    float numberOfQuarts;

    printf("Enter the amount of water (in quarts): ");
    scanf("%f", &numberOfQuarts);

    printf("There are %g molecules in %g quarts of water\n",
           (numberOfQuarts*MASS_PER_QUART_OF_WATER)/MASS_PER_MOLECULE_OF_WATER,
           numberOfQuarts);

    return 0;

}
