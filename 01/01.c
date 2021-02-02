// C11 Standard

#include <stdio.h>

int main(void)
{
    int a;

    a = 1;

    printf("I am a robot.\n");
    printf("My favorite number is %d.\n",a);

    return 0;
}

/*
 * Here, a is an identifier, i.e. a name selected for a variable, a function or some other entity.
 * A variable must be declared before its first use.
 * C names are case sensitive.
 * %d tells the computer where and in what form to print the value of a. The % alerts the program that a variable, generally, is to be printed at that location, and the d tells it to print the variable as a decimal integer value.
 * int a = 1; is the same as int a; and a = 1;
 */