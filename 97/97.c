// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>
#include <stdlib.h>


double power(double base, int exponent);


int main(void)
{

    double base, result;
    int exponent;

    while (1)
    {
        printf("Enter the base and an integral exponent (q to quit): ");
        if (scanf("%lf %d", &base, &exponent) != 2)
            break;

        result = power(base, exponent);

        printf("%g ^ %d = %g\n\n", base, exponent, result);
    }

    return 0;

}


double power(double base, int exponent)
{

    if (exponent == 0)
    {
        if (base == 0.0)
            printf("Warning: 0 ^ 0 is undefined. Using 1.\n");

        return 1.0;
    }

	if (base == 0.0)
		return 0.0;

    double result = base * power(base, abs(exponent)-1);

	if (exponent < 0)
		result = 1.0 / result;

	return result;

}
