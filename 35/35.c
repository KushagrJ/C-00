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
   It's operand's data type can be int, char, float, etc.
   [For eg., (a) a = b++; assigns the original value of b to a, and the original
                 value of b gets increased by 1.
             (b) a = ++b; assigns the original value of b plus 1 to a, and the
                 original value of b gets increased by 1.]
   [a++; and ++a; both increment a by 1, i.e. they are identical when used by
    themselves, without being part of a larger expression]
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
   [There should be no spaces between the two plus signs, as + +x means +(+x),
    which means x]

 * -- is the decrement operator. It decrements the value of its operand by 1.
   [Similar rules apply for -- as well]

 * The increment and decrement operators have a very high precedence; only
   parentheses are higher.
   [For eg., x*y++ means (x)*(y++), and not (x*y)++, which is invalid anyway as
             (x*y) is not a modifiable lvalue]


 * The increment/decrement operator shouldn't be used on a variable that is part
   of more than one argument of a function. Also, the increment/decrement
   operator shouldn't be used on a variable that appears more than once in an
   expression. Doing so would generally result in undefined behaviour (unless
   sequence points, etc. are used), as the compiler is free to choose the order
   of evaluation of function arguments alongwith choosing the order of
   evaluation of expressions (an example of unspecified behaviour), thereby
   increasing compiler efficiency.
   [For eg., (a) int a = 1;
                 while (a < 10)
                     printf("%d squared equals %d\n", a, a*a++);
             (b) a = (b/2)+5*(1+b++);
             (c) x = y++ + y++;]
   [An interesting thing to know about undefined behaviour is that once
    undefined behaviour gets invoked, the compiler is free to do whatever it
    wants, including crashing the program or formatting the hard drive (which
    never happens in practice)]

 * [From here on out, consistent-unspecified will refer to the behaviour that is
    unspecified by the C standard, but which always produces the same result.
    Similarly, inconsistent-unspecified will refer to the behaviour that is
    unspecified by the C standard, which can also produce different results on
    different systems.
    Undefined behaviour automatically means that the underlying behaviour is
    inconsistent-unspecified as well (because even if the programs with
    undefined behaviour produce consistent results on many systems, the fact
    that undefined behaviour may also cause those programs to crash, etc. makes
    the behaviour inconsistent-unspecified as well), but all
    inconsistent-unspecified behaviours don't necessarily invoke undefined
    behaviour.
    Also, well-specified and consistent-unspecified behaviours automatically
    mean that the underlying behaviour is well-defined as well, but all
    well-defined behaviours don't necessarily imply well-specified or
    consistent-unspecified behaviours.]

 * int x = 1; x = x = x; also invokes undefined behaviour, even though it is
   logically unambiguous. This is because it involves multiple modifications to
   x between two sequence points.
   For eg., x = x;   - consistent-unspecified behaviour (the value computations
                       of the left and right operands of = aren't sequenced).
            x = x+1; - consistent-unspecified behaviour (same logic as x = x;).
            x = x++; - undefined behaviour (it is not sequenced whether the side
                       effect by assignment to x will be done before or after
                       the side effect by ++).
                       Also, x++ doesn't mean that the incrementation of x
                       happens after the value of x++ is used in an expression
                       (which is just the value of x). The incrementation can
                       happen as early as the compiler likes, as long as it is
                       ensured that the original value of x is used.
            x = ++x; - undefined behaviour (similarly to x++, incrementing x in
                       ++x doesn't always need to happen before the value of ++x
                       is used, i.e. the compiler can store the return value of
                       ++x (which is x+1) in a register variable and actually
                       increment the value of x later).
            int x;   - well-specified behaviour.
            printf("%d\n", x);   - well-specified behaviour.
            printf("%d\n", ++x); - consistent-unspecified behaviour (it is not
                                   sequenced when the incrementation will be
                                   performed).
   [Simiarly for other similar expressions]

 * i = i++, i--, i;   - undefined behaviour (because of i = i++, since comma
                        has a lower precedence than assignment).
   i = i, i++, i;     - consistent-unspecified behaviour (same logic as x = x;).
   i = i, i++, i--;   - consistent-unspecified behaviour (same logic as x = x;).
   i = (i, i++, i--); - undefined behaviour (because there is no sequence
                        point between i-- and the final assignment to i, i.e.
                        basically the same reason as i = i--; is undefined).
   i = (i++, i--, i); - consistent-unspecified behaviour (same logic as x = x;).
                        This is well-defined because of the parentheses - thus,
                        in cases like this, the parentheses are able to
                        determine the order of evaluation, kind of).
   i = (i++, i, j--); - consistent-unspecified behaviour.
   [Simiarly for other similar expressions]

 * A very common example of undefined behaviour is 'when the same object's
   stored value gets modified more than once between two sequence points', or
   'when an object's stored value gets modified exactly once between two
   sequence points and the stored value of that object is read to determine
   something other than the value which ends up getting stored in that object
   due to the same modification'.
   For eg., (a) a[x] = x++;        - undefined behaviour (because even though
                                     the value stored in x is modified only once
                                     between two sequence points, the access to
                                     x has nothing to do with the value which
                                     ends up getting stored in x.
                                     This is inconsistent-unspecified behaviour
                                     because the modification and access to x
                                     are unsequenced]
            (b) x = i + i++;       - undefined behaviour (because the access to
                                     i (left operand of +) has nothing to do
                                     with the value which ends up getting stored
                                     in i due to ++).
            (c) i > i++;           - undefined behaviour (because the access to
                                     i (left operand of >) has nothing to do
                                     with the value which ends up getting stored
                                     in i due to ++).

 * i > (i++, 5) - inconsistent-unspecified + well-defined behaviour.
   This is inconsistent-unspecified behaviour because the modification and
   access to i are unsequenced.
   This is well-defined behaviour because the modification and access to i are
   separated by a sequence point. Note that the access to i (left operand of >)
   still has nothing to do with the value which ends up getting stored in i due
   to ++, but this is not enough to invoke undefined behaviour, as the
   modification and access to i aren't between the same seqeunce point.
   Thus, well-defined behaviour doesn't necessarily mean that the underlying
   behaviour is well-specified or consistent-unspecified.

 * Unspecified behaviour guarantees that the program will run properly (it might
   produce different results on different systems), but undefined behaviour
   might cause the program to crash, alongwith producing different results on
   different systems.
   In practice, all undefined behaviours should be avoided, alongwith those
   unspecified behaviours that might produce different results on different
   systems (i.e. inconsistent-unspecified).
   As a good practice, the increment and decrement operators shouldn't be used
   in expressions, and should always be used in statements by themselves. If the
   situation necessitates their use in an expression, then it should be ensured
   that the same variable isn't used anywhere else in that entire statement.
   [Simiarly for other similar expressions]

 * printf("%d %d\n", x, x); is consistent-unspecified behaviour, but
   printf("%d %d\n", x, x++); is undefined behaviour.
   [Simiarly for other similar expressions]


 * For non-sequence-point operators, the value computations of the left and
   right operands (in either order) are sequenced before the value computation
   and side effects of the result of the operator. The side effects associated
   with the left and right operands are unsequenced.
 * For sequence-point operators, the value computation and side effects of the
   left operand are sequenced before the value computation and side effects of
   the right operand. The value computation, alongwith the side effects (if
   applicable), of the result of the operator are sequenced after the value
   computations and side effects of both the operands have been performed.

 * Operator precedence :-

   Whatever is enclosed in parentheses is executed before/when the results of
   the expressions inside the parentheses are required by the compiler to move
   forward.
   The operator precedence and the parentheses don't matter when operands aren't
   shared between operators/parentheses.
   The parentheses don't specify the order of evaluation. For eg., x = (x++); is
   still undefined, just like x = x++;.
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
                 (type)    Cast
                   *       Indirection (dereference)
                   &       Address-of
                 sizeof    Size-of
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
   In C, the order of evaluation is unspecified, unless sequence points, etc.
   are used.

   Operator precedence dictates which operations have to be evaluated before the
   results of those operations are used together with the rest of the
   expression.
   Order of evaluation is the actual order of execution of function arguments in
   a function call, sub-expressions within an expression, etc.
   [For eg., (a) f1()+f2()+f3() is evaluated as (f1()+f2())+f3(), but the
                 function call to f1() may be evaluated first, last or in
                 between the calls to f2() & f3()
             (b) a = ++a * (a++ + 5) - a++ may or may not be evaluated before
                                       ++a]

 * For eg., int a = -(2+5)*6+(4+3*(2+3)); assigns -23 to a]
   [It isn't necessary for all the parentheses to be resolved before moving on
    to other operators. For eg., (2+3) may be evaluated first and (2+5) may be
    evaluated much later.
    Also, (2+5) may be evaluated first, followed by (2+5)*6, and so on.]

 * For eg., int x; int a = 2; int b = 5; int c = 6; int d = 4; x = a*b/(c+d);
            Here, the final value of x will be 1, no matter the order of
            evaluation, which is unspecified. Thus, this is
            consistent-unspecified behaviour.

   On one system, the order of evaluation may be like this -
   Step 1 ->   x = a * b / (c + d);
   Step 2 ->   x = a * 5 / (c + d);
   Step 3 ->   x = a * 5 / (c + 4);
   Step 4 ->   x = 2 * 5 / (c + 4);
   Step 5 ->   x = 10 / (c + 4);
   Step 6 ->   x = 10 / (6 + 4);
   Step 7 ->   x = 10 / 10;
   Step 8 ->   x = 1;

   On another system, the order of evaluation may be like this -
   Step 1 ->   x = a * b / (c + d);
   Step 2 ->   x = a * b / (6 + d);
   Step 3 ->   x = a * b / (6 + 4);
   Step 4 ->   x = a * b / 10;
   Step 5 ->   x = 2 * b / 10;
   Step 6 ->   x = 2 * 5 / 10;
   Step 7 ->   x = 10 / 10;
   Step 8 ->   x = 1;


 * exp1 && exp2 returns 1 (true) only if both exp1 and exp2 are true
   exp1 || exp2 returns 1 (true) if either exp1 or exp2 is true or if both are
                true
   [For eg., 5 > 2 && 4 > 7 returns 0
             3 && 4 returns 1
             5 > 2 || 4 > 7 returns 1
             0 || -22 returns 1]

   && and || use lazy/short-circuit evaluation. This means that if the left
   operand of &&/|| evaluates to 0/1, then the right operand isn't evaluated.
   For eg., (a) int x = 1, y = 2; x = y - 2 * x && (y = 3); printf("%d\n", y);
                prints 2
            (b) int x = 1, y = 2; x = y - x || (y = 3); printf("%d\n", y);
                prints 2
   Lazy evaluation wouldn't be possible if && and || weren't sequence points.

   For eg., int x = 3 + 4 * 7 / (6 - 1) + 2 && 5 <= 0 || (9 == 8);

   On one system, the order of evaluation may be like this -
   Step 01 ->   x = 3 - 4 * 7 / (6 + 1) + 2 && 5 <= 0 || (9 == 8);
   Step 02 ->   x = 3 - 28 / (6 + 1) + 2 && 5 <= 0 || (9== 8);
   Step 03 ->   x = 3 - 28 / 7 + 2 && 5 <= 0 || (9 == 8);
   Step 04 ->   x = 3 - 4 + 2 && 5 <= 0 || (9 == 8);
   Step 05 ->   x = -1 + 2 && 5 <= 0 || (9 == 8);
   Step 06 ->   x = 1 && 5 <= 0 || (9 == 8);
   Step 07 ->   x = 1 && 0 || (9 == 8);
   Step 08 ->   x = 0 || (9 == 8);
   Step 09 ->   x = 0 || 0;
   Step 10 ->   x = 0;

   [Note that the right operands of && and || cannot be evaluated before their
    left operands.
    In this example, due to <= having a higher precedence than && and || having
    a lower predence than &&, the expression 5 <= 0 becomes the right operand of
    && (and not just the constant 5), which cannot be evaluated before its left
    operand gets evaluated due to && being a sequence point. Again, due to
    operator precedence and parentheses, the left operand of && is actually the
    expression 3 + 4 * 7 / (6 - 1) + 2 (and not just the constant 2).
    Similarly, the right operand of || is the expression (9 == 8) and its left
    operand is 3 - 4 * 7 / (6 + 1) + 2 && 5 <= 0, due to operator precedence and
    parentheses.


 * For eg., int x; int y = 1; x = ++y * y-- / (y + y++);
            This is an example of undefined behaviour. Hence, the final value
            that gets assigned to x may vary between systems. Also, since
            undefined behaviour is involved, therefore there is no guarantee
            that the evaluation will take place at all (anything can happen).

   On one system, the order of evaluation may be like this -
   Step 1 ->   x = ++y * y-- / (y + y++);   // (y has value 1)
   Step 2 ->   x = ++y * y-- / (1 + y++)    // (y still has value 1)
   Step 3 ->   x = ++y * 1 / (1 + y++);     // (y now has value 0)
   Step 4 ->   x = 1 * 1 / (1 + y++);       // (y now has value 1)
   Step 5 ->   x = 1 / (1 + y++);           // (y still has value 1)
   Step 6 ->   x = 1 / (1 + 1);             // (y now has value 2)
   Step 7 ->   x = 1 / 2;
   Step 8 ->   x = 0;

   On another system, the order of evaluation may be like this -
   Step 1 ->   x = ++y * y-- / (y + y++);   // (y has value 1)
   Step 2 ->   x = ++y * y-- / (y + 1);     // (y now has value 2)
   Step 3 ->   x = ++y * 2 / (y + 1);       // (y now has value 1)
   Step 4 ->   x = ++y * 2 / (1 + 1);       // (y still has value 1)
   Step 5 ->   x = ++y * 2 / 2;             // (y still has value 1)
   Step 6 ->   x = 2 * 2 / 2:               // (y now has value 2)
   Step 7 ->   x = 4 / 2;
   Step 8 ->   x = 2;

   [Erroneous version - https://stackoverflow.com/questions/67689209]


 * The semantics for the evaluation of an = expression include that the side
   effect of updating the stored value of the left operand is sequenced after
   the value computations of the left and right operands. This follows directly
   from the rule for non-sequence-point operators discussed previously.
   The part about the value computation of the left operand of an assignment
   operator is not immediately clear when working with very simple data objects
   as left operands, such as a variable, as there is logically nothing to
   evaluate the variable to.
   For eg., (a) x = 1;
                Here, the left operand of = gets evaluated to an lvalue, which
                is defined as an expression (with an object type other than
                void) that potentially designates an object.
                In other words, evaluating the left operand to an lvalue means
                determining the memory location in which to store the result.
            (b) arr[get_index()] = 1;
                Here, it is more obvious that the left operand also needs to get
                evaluated to something (i.e. an lvalue) before assignment.
   So, for int x = 1; y = 2; x = y;, it is guaranteed that the left operand will
   get evaluated to an lvalue and the right operand will get evaluated to 2 (in
   either order) before the side effect of updating the value of x happens.
   Also, for int i = 1; i = i++;, it is guaranteed that the left operand will
   get evaluated to an lvalue and the right operand will get evaluated to 1 (in
   either order) before the side effect of assignment happens. The
   incrementation's unspecified order invokes undefined behaviour.

 * Note that the sequence-point operators only guarantee that the value
   computations and side effects of their left operands get performed before the
   value computations and side effects of their right operands. They don't
   guarantee that the value computations and side effects of everything that
   comes before them get performed before moving forward, as opposed to some
   other sequence points (such as between the evaluation of a full expression
   and the next full expression to be evaluated).
   For eg., (a) x = 3 && 4;
                && only guarantees that 3 has been evaluated before 4. It
                doesn't care about x = 3's value computation or side effect,
                which in any case cannot be performed before 3 && 4 has been
                evaluated, due to operator precedence.
            (b) y = (y = 5) && y; or y = y++ && y (consistent-unspecified)
                Due to the parentheses, (y = 5) becomes the left operand of &&.
                So, it is guaranteed that the value computation and side effect
                of (y = 5) will get performed before the value computation of
                the right operand of &&, which is y.
                Again, as a sequence-point operator, && doesn't care about the
                value computation and side effect associated with the final
                assignment to y.
   [y = y > (y = 5) && y; or y = y > y++ && y; - undefined behaviour because the
    access to y has nothing to do with the value which ends up getting stored in
    y due to (y = 5)]
   [Similarly for other similar expressions]

 */
