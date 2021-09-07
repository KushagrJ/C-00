// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>
#define CM_PER_IN 2.54
#define IN_PER_FT 12.0


int main(void)
{

    float heightInCentimetres, heightInInches, inches;
    int feet;

    printf("Enter a height in centimetres: ");
    scanf("%f", &heightInCentimetres);

    while (heightInCentimetres > 0.0)
    {
        heightInInches = heightInCentimetres/CM_PER_IN;
        feet = (int)(heightInInches/IN_PER_FT);
        inches = heightInInches-(feet*IN_PER_FT);

        printf("%.1f cm = %d feet, %.1f inches\n\n",
               heightInCentimetres, feet, inches);

        printf("Enter a height in centimetres (<= 0 to quit): ");
        scanf("%f", &heightInCentimetres);
    }

    printf("bye\n");

    return 0;

}
