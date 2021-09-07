// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


void Temperatures(double fahr);


int main(void)
{

    double fahr;

    printf("Enter a temperature in degrees fahrenheit (q to quit): ");

    while (scanf("%lf", &fahr) == 1)
    {
        Temperatures(fahr);
        printf("Enter a temperature in degrees fahrenheit (q to quit): ");
    }

    return 0;

}


void Temperatures(double fahr)
{

    const double a = 5.0/9.0;
    const double b = -32.0;
    const double c = 273.16;

    double celsius = a*(fahr+b);
    double kelvin = celsius+c;

    printf("The equivalent temperatures are %.2f in celsius "
           "and %.2f in kelvin\n\n", celsius, kelvin);

}





/* Trivia

 * while (scanf("%lf", &fahr) == 1) can also be simply written as
   while (scanf("%lf", &fahr)), as the while loop executes if the value
   of the expression inside the parentheses (i.e. the return value of scanf() in
   this case) is 1.
 * A while loop like while (any non-zero value) will loop forever.
 * while (a != 0) and while (a) are the same thing, as C considers all non-zero
   values as true.
 * Also, after a non-numeric character is entered for scanf("%lf", &fahr), it
   gets stored in the input buffer, ready to be read by an upcoming scanf(),
   if applicable.

 * foo = function(); 'runs' the function and then assigns the function's return
   value to foo.

 */
