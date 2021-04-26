// C17 Standard

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