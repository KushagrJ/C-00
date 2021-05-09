// C17 Standard

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
