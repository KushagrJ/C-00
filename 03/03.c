// C11 Standard

#include <stdio.h>

void butler(void);

int main(void)
{
    printf("I will summon the butler function.\n");

    butler();

    printf("Yes. Bring me some tea and hard drives.\n");

    return 0;
}

void butler(void)
{
    printf("You rang, Sir?\n");
}



/* Trivia

 * void butler(void); is a prototype, also known as a function declaration. It also specifies the properties of a
   fuction.
 * The first void in void butler(void); indicates that butler() doesn't have a return value. The second void means that
   butler() has no arguments.
 * The butler() definition could've been put above the main() definition, with the program running the same.

 */