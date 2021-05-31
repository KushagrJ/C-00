// C17 Standard

#include <stdio.h>


void bubble_sort(double * u, double * v, double * w);


int main(void)
{

    double x, y, z;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("\nBefore, x = %g, y = %g & z = %g\n", x, y, z);

    bubble_sort(&x, &y, &z);

    printf("After, x = %g, y = %g & z = %g\n", x, y, z);

    return 0;

}


void bubble_sort(double * u, double * v, double * w)
{

    double temp;

    if (*u > *v)
        temp = *u, *u = *v, *v = temp;

    if (*v > *w)
        temp = *v, *v = *w, *w = temp;

    if (*u > *v)
        temp = *u, *u = *v, *v = temp;

}
