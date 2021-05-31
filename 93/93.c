// C17 Standard

#include <stdio.h>


void larger_of(double * u, double * v);


int main(void)
{

    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    printf("\nBefore, x = %g & y = %g\n", x, y);

    larger_of(&x, &y);

    printf("After, x = %g & y = %g\n", x, y);

    return 0;

}


void larger_of(double * u, double * v)
{
    *u = *u > *v ? *u : *v;
    *v = *u;
}
