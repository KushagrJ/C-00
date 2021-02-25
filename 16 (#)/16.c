// C11 Standard

#include <stdio.h>

int main(void)
{
    float a = 32000.0;
    double b = 2.14e9;
    long double c = 532000E-5;

    printf("%f, %f and %Lf can also be written as %e/%E, %e/%E and %Le/%LE in "
           "the standard form, or as %a/%A, %a/%A and %La/%LA in the "
           "hexadecimal form, respectively.\n",
           a, b, c, a, a, b, b, c, c, a, a, b, b, c, c);

    return 0;
}



/* Trivia

 * float has to be able to represent at least six significant figures and allow a range of at least 10^(-37) to 10^(37).
 * The double presicion floating-point variable type (double) has to be able to represent at least ten significant
   figures and allow a range of at least 10^(-37) to 10^(37).
 * long double has to be at least as precise as double.
 * Normally, constants within double's range are stored as double. To make the compiler store such constants as float or
   long double, suffixes f/F or l/L should be used, respectively.
 * float doesn't keep track of extra significant figures. So, 2.0E20+1 will not be calculated correctly, but 2.0E4+1
   will.
 * Complex and imaginary types are float _Complex, double _Complex, long double _Complex, float _Imaginary,
   double _Imaginary and long double _Imaginary. Including the complex.h header file lets the keywords complex and
   imaginary to be used instead of _Complex and _Imaginary, repectively, and I to be used to represent (-1)^(1/2).
 * %lf as a long double specifier is not supported on all systems. So, %Lf should be used.
 * F can also be used instead of f.
 * %g/%G prints a value as either %f/%F or %e/%E, depending upon the value converted and the precision. Also, it removes
   any trailing zeroes from the fractional portion of the result.

 */