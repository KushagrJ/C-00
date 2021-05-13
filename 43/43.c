// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


void cube(double num);


int main(void)
{

    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    cube(num);

    return 0;

}


void cube(double num)
{

    printf("The cube of %.2f is %.2f\n", num, num*num*num);

}
