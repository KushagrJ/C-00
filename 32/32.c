// C17 Standard

#include <stdio.h>
#include <float.h>


int main(void)
{

    double a = 1.0/3.0;
    float b = 1.0/3.0;

    printf("%-20s %-20s\n", "Double", "Float");
    printf("%-20.4f %-20.4f\n", a, b);
    printf("%-20.12f %-20.12f\n", a, b);
    printf("%-20.16f %-20.16f\n\n", a, b);

    printf("DBL_DIG: %-11d ", DBL_DIG);
    printf("FLT_DIG: %-11d\n", FLT_DIG);

    return 0;

}