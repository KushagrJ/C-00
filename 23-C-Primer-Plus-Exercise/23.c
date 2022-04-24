// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


int main(void)
{
    float CENTIMETRES_PER_INCH = 2.54;
    float height;

    printf("Enter your height (in inches): ");
    scanf("%f", &height);

    printf("You are %.2f centimetres tall\n", height*CENTIMETRES_PER_INCH);

    return 0;

}
