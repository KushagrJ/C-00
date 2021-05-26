// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


double min(double x, double y);


int main(void)
{

    double x, y;
    printf("Enter 2 numbers: ");
    scanf("%lf %lf", &x, &y);

    printf("The smaller of the 2 numbers is %g\n", min(x, y));

    return 0;

}


double min(double x, double y)
{
    if (x < y)
        return x;
    else
        return y;
}
