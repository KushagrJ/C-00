// C17 Standard

#include <stdio.h>


int main(void)
{

    int a;
    int b = 1;

    printf("Enter an integer to get its multiplication table: ");
    scanf("%d", &a); printf("\n");

    while (++b < 10)
        printf("%dx%d = %d\n", a, b, a*b);

    return 0;

}





/* Trivia

 * ++ is the increment operator. It increments the value of its operand by 1.
   [For eg., a = b++; assigns the value of b to a, and then increments b by 1
             a = ++b; increments b by 1, and then assigns the value of b to a
             a++; and ++a; both increment a by 1, i.e., they are identical when
             used by themselves, without being part of a larger expression]
   [In this program, b is incremented before it is used to check the condition
    in the while loop. So, for the first iteration, the while loop checks
    whether 2 < 10 and uses the value of 2 for b in its body. Similarly, for the
    second iteration, the while loop checks whether 3 < 10 and uses the value of
    3 for b in its body, and so on.
    If ++b is replaced with b++ in this program, then b will get incremented
    after being used to check the condition in the while loop. So, for the first
    iteration, the while loop will check whether 1 < 10 and use the value of 2
    for b in its body. Similarly, for the second iteration, the while loop will
    check whether 2 < 10 and use the value of 3 for b in its body, and so on.
    So, if b++ is used instead of ++b in this program, then the output will also
    contain the number being multiplied by 10.]
   [For eg., q = 2*++a; increments a by 1, multiplies a by 2 and then assigns
             the result to q
             q = 2*a++; multiplies a by 2, assigns the result to q and then
             increments a by 1]

 * -- is the decrement operator. It decrements the value of its operand by 1.
   [Similar rules apply for -- as well]

 * The increment and decrement operators have a very high precedence; only
   parentheses are higher.
   [For eg., x*y++ means (x)*(y++), and not (x*y)++, which is invalid anyway as
             (x*y) is not a modifiable lvalue]

 * The increment/decrement operator shouldn't be used on a variable that is part
   of more than one argument of a function. Also, the increment/decrement
   operator shouldn't be used on a variable that appears more than once in an
   expression. Doing so would result in undefined behaviour, as the compiler is
   free to choose which arguments in a function to evaluate first alongwith
   choosing the order in which operators having the same precedence are
   executed, thereby increasing compiler efficiency.
   [For eg., (a) int a = 1;
                 while (a < 10)
                     printf("%d squared equals %d\n", a, a*a++);
             (b) a = (b/2)+5*(1+b++);
             (c) x = y++ + y++;]

 */