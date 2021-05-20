// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


void to_binary(long num);


int main(void)
{

    long num;

    printf("Enter a positive integer: ");
    scanf("%ld", &num);

    printf("%ld in binary: ", num);
    to_binary(num);
    putchar('\n');

    return 0;

}


void to_binary(long num)
{

    int r = num%2;

    if (num >= 2)
        to_binary(num/2);

    putchar(r == 0 ? '0' : '1');

}





/* Trivia

 * In this program,
   (a) the last digit of the binary form is found in the first level, the second
       last digit is found in the second level, and so on, suggesting that a
       recursive solution is easier than a loop solution in this case.
   (b) num%2 gives the last digit of the binary form (0 or 1),
       (num/2)%2 gives the second last digit of the binary form,
       ((num/2)/2)%2 gives the third last digit of the binary form,
       and so on.
       [This logic is similar to num%10 giving the last digit of the decimal
        form of a positive integer and num/10 basically removing its last digit]

 * A function is a self-contained unit of program code designed to accomplish a
   particular task. In general, a function can both produce actions and provide
   values.
 * Functions should be used because they help avoid repetitious programming.
   Also, they make a program more modular, hence easier to read and easier to
   change or fix.
 * If functions are made general enough, they can be reused in other programs.
 * Thinking about what a function should do and how it relates to the program
   as a whole should be done before worrying about writing the code for it.
 * Each function should have a single, well-defined purpose.

 * The process of a function calling itself is known as recursion. Recursion is
   a sometimes tricky, sometimes convenient tool.
 * Recursion often can be used where loops can be used. Sometimes the loop
   solution is more obvious; sometimes the recursive solution is more obvious.
   Recursive solutions tend to be more elegant, but less efficient than loop
   solutions.
   Normally, the loop solution is the better choice, because recursion uses more
   memory, and is slower.
   But, in some cases, recursion becomes necessary as there is no simple loop
   solution.

 */
