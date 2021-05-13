// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


void factorial(int num);


int main(void)
{

    int num;

    printf("Enter a positive integer to know its factorial: ");
    scanf("%d", &num);

    factorial(num);

    return 0;

}


void factorial(int num)
{

    int a = 1;

    printf("%d! = ", num);

    while (num > 1)
    {
        printf("%dx", num);
        a = a*num;
        num--;
    }

    printf("%d = %d\n", 1, a);

}





/* Trivia

 * int num in the prototype of factorial() indicates that it takes one argument
   of type int in the form of the variable num, which is declared inside the
   parentheses.
 * Declaring an argument creates a variable called the parameter. Making a
   function call such as factorial(10); assigns 10 to num inside the factorial()
   function.
 * The local variable num of factorial() is different from the local variable
   num of main(). They are just named the same to avoid confusion.
 * When we call factorial() as factorial(num);, the function call passes a value
   (which is the positive integer assigned to num by the user) to the function,
   and this value is called an argument.
   [So, for factorial(10);, 10 is the argument and num is the parameter]
 * If an argument other than integer is passed to factorial(), then it gets
   automatically converted to int.

 */
