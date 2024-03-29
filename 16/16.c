// C17 Standard

#include <stdio.h>


void print_a_in_various_forms(void);
void print_b_in_various_forms(void);
void print_c_in_various_forms(void);


int main(void)
{

    print_a_in_various_forms();

    print_b_in_various_forms();

    print_c_in_various_forms();

    return 0;

}


void print_a_in_various_forms(void)
{

    float a = 32000.0F;

    printf("%.0f in various forms :-\n"
           "Exponential Form - %.2e/%.2E\n"
           "Hexadecimal Form - %a/%A\n\n",
           a, a, a, a, a);

}


void print_b_in_various_forms(void)
{

    double b = 2.14e2;

    printf("%.0f in various forms :-\n"
           "Exponential Form - %.2e/%.2E\n"
           "Hexadecimal Form - %a/%A\n\n",
           b, b, b, b, b);

}


void print_c_in_various_forms(void)
{

    long double c = 532000E-3L;

    printf("%.0Lf in various forms :-\n"
           "Exponential Form - %.2Le/%.2LE\n"
           "Hexadecimal Form - %La/%LA\n",
           c, c, c, c, c);

}





/* Trivia - 16.c

 * float has to be able to represent at least six significant figures and allow
   a range of at least 10^(-37) to 10^(37). The double precision floating-point
   variable type (double) has to be able to represent at least ten significant
   figures and allow a range of at least 10^(-37) to 10^(37).
 * long double has to be at least as precise as double.
 * Normally, constants within double's range are of data type double. To make
   the compiler use such constants as float or long double, suffixes f/F or l/L
   should be used, respectively.
   [long double x = (long double) 1.0; is different from long double x = 1.0L;
    as in the first case, the constant 1.0 is initially of data type double and
    is then converted to long double, but in the second case, the constant 1.0
    is of data type long double to begin with.
    Similarly for others.]
   [Constants such as 3, 5.6, 'K', 5+7, etc. aren't stored in memory]
 * There is no format specifier for float in printf(), because when a float is
   passed to printf(), it gets promoted to double before printf() receives it.
   [See 'Type conversions' in 34.c]
 * float doesn't keep track of extra significant figures. So, 2.0E20 + 1 will
   not be calculated correctly, but 2.0E4 + 1 will be.
 * Complex and imaginary types are float _Complex, double _Complex,
   long double _Complex, float _Imaginary, double _Imaginary and
   long double _Imaginary. Including the complex.h header file lets the keywords
   complex and imaginary to be used instead of _Complex and _Imaginary,
   repectively, and I to be used to represent (-1)^(1/2).
 * %lf as a long double specifier is not supported on all systems. So, %Lf
   should be used.
 * F can also be used instead of f.
 * %g/%G prints a value as either %f/%F or %e/%E, depending upon the value
   converted and the precision. Also, it removes any trailing zeroes from the
   fractional portion of the result, alongwith removing the decimal-point
   character, if it's not required.
 * Exponential form is also known as standard form / scientific notation.

 * In scanf(), %f is used for float, %lf is used for double and %Lf is used for
   long double.

 * End of Trivia */
