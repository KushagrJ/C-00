// C17 Standard

#include <stdio.h>


int main(void)
{

    int a;

    a = 1;

    printf("I am a robot.\n");
    printf("My favorite number is %d.\n", a);

    return 0;

}





/* Trivia - 01.c

 * Here, a is an identifier, i.e. a name selected for a variable, a function or
   some other entity.
 * A variable must be declared before its first use.
 * C names are case sensitive.
 * %d tells the computer where and in what form to print the value of a. The %
   alerts the program that the value stored in a variable, generally, is to be
   printed at that location, and the d tells it to print the value as a decimal
   integer
 * int a = 1; is the same as int a; and a = 1;
 * %% can be used to print a percent sign.

 * main, printf, etc. can be used as variable names, as they are not keywords.
   But, beware of mismatching.
   [For eg., int printf = 1; printf("%d\n", printf); - error
             int main = 1; printf("%d\n", main); - no error
             int printf = 1; putchar(printf); - no error]

 * Using main, printf, etc. as user-defined function names results in errors.

 * The format for using printf() is printf(Control-String, item1, item2, ...);
   The phrase enclosed in double quotes is the Control-String, which describes
   how the items are to be printed.

 * End of Trivia */
