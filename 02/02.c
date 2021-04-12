// C17 Standard

#include <stdio.h>


int main(void)
{

    int feet, fathoms;

    fathoms = 2;
    feet = 6*fathoms;

    printf("There are %d feet in %d fathoms.\n", feet, fathoms);
    printf("So, there must be %d feet in %d fathoms.\n", 6*8, 8);

    return 0;

}





/* Trivia

 * int feet, fathoms; is the same as int feet; and int fathoms;
 * The value printed with the help of %d doesn't always have to be a variable.
   It just has to be a decimal integer.

 */