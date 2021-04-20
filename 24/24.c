// C17 Standard

#include <stdio.h>


int main(void)
{
    float PINTS_PER_CUP = 0.5;
    float OUNCES_PER_CUP = 8;
    float TABLESPOONS_PER_CUP = 2*OUNCES_PER_CUP;
    float TEASPOONS_PER_CUP = 3*TABLESPOONS_PER_CUP;
    float cups;

    printf("Enter the volume of water (in cups): ");
    scanf("%f", &cups);

    printf("%g cups is equivalent to -\n", cups);
    printf("%.2f pints\n", cups*PINTS_PER_CUP);
    printf("%.2f ounces\n", cups*OUNCES_PER_CUP);
    printf("%.2f tablespoons\n", cups*TABLESPOONS_PER_CUP);
    printf("%.2f teaspoons\n", cups*TEASPOONS_PER_CUP);

    return 0;

}