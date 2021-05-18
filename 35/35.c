// C17 Standard
// Include input validation in version B of this program.

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

 * Operator precedence :-

   Parentheses are used to define custom precedence.
   So, whatever is enclosed in parentheses is executed first.
   [These parentheses aren't operators]

   Precedence   Operator   Description                             Associativity

       01          ++      Postfix increment                       Left-to-right
                   --      Postfix decrement
                   ()      Function call (different from the afore-
                                          mentioned parentheses)
                   []      Array subscript
                   .       Structure and union member access
                   ->      Structure and union member access
                           through pointer
           (type) {list}   Compound literal

       02          ++      Prefix increment                        Right-to-left
                   --      Prefix decrement
                   +       Unary plus
                   -       Unary minus
                   !       Logical NOT
                   ~       Bitwise NOT
                  (type)   Cast
                   *       Indirection (dereference)
                   &       Address-of
                  sizeof   Size-of
                _Alignof   Alignment requirement

       03          *       Multiplication                          Left-to-right
                   /       Division
                   %       Remainder

       04          +       Addition                                Left-to-right
                   -       Subtraction

       05          <<      Bitwise left shift                      Left-to-right
                   >>      Bitwise right shift

       06          <       Relational less than                    Left-to-right
                   <=      Relational less than or equal to
                   >       Relational greater than
                   >=      Relational greater than or equal to

       07          ==      Relational equal to                     Left-to-right
                   !=      Relational not equal to

       08          &       Bitwise AND                             Left-to-right

       09          ^       Bitwise XOR                             Left-to-right

       10          |       Bitwise OR                              Left-to-right

       11          &&      Logical AND                             Left-to-right

       12          ||      Logical OR                              Left-to-right

       13          ?:      Ternary conditional                     Right-to-Left

       14          =       Assignment                              Right-to-Left
                   +=      Assignment by sum
                   -=      Assignment by difference
                   *=      Assignment by product
                   /=      Assignment by quotient
                   %=      Assignment by remainder
                   <<=     Assignment by bitwise left shift
                   >>=     Assignment by bitwise right shift
                   &=      Assignment by bitwise AND
                   ^=      Assignment by bitwise XOR
                   |=      Assignment by bitwise OR

       15          ,       Comma operator                          Left-to-right

 * Order of evaluation :-

   Operator precedence provides vital rules for determining the order of
   evaluation, but it doesn't necessarily determine the complete order.
   [For eg., int a = 6*15+5*20;
             Operator precedence dictates that 6*15 and 5*20 will be calculated
             before addition, but it doesn't tell which multiplication will be
             done first.
             Here, the left-to-right associativity of multiplication doesn't
             apply, as the multiplications don't share an operand.]

   Unlike Java, the order of evaluation is not necessarily left to right in C.
   In C, the order of evaluation is undefined, unless sequence points, etc. are
   used.

   Operator precedence dictates which operations have to be evaluated before the
   result of those operations are used together with the rest of the expression.
   Order of evaluation is the actual order of execution of function arguments in
   a function call, sub-expressions within an expression, etc.
   [For eg., f1()+f2()+f3() is evaluated as (f1()+f2())+f3(), but the function
             call to f1() may be evaluated first, last or in between the calls
             to f2() & f3()
             a = ++a*(a++ + 5) - a++ may or may not be calculated before ++a]

 * For eg., int a = -(2+5)*6+(4+3*(2+3)); assigns -23 to a]

 */
