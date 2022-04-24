// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


double harmonic_mean(double x, double y);


int main(void)
{

    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    printf("The harmonic mean of the two numbers is %g\n", harmonic_mean(x, y));

    return 0;

}


double harmonic_mean(double x, double y)
{
    return 2.0 / ( (1.0 / x) + (1.0 / y) );
}
