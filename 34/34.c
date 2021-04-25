// C17 Standard

#include <stdio.h>


int main(void)
{

    const double ADJUST = 7.31;
    const double SCALE = 0.333;
    double shoe = 3.0;
    double foot;

    printf("%-12s %-14s\n", "Shoe Size", "Foot Length");
    printf("%8s %13s\n\n", "(men's)", "(inches)");

    while (shoe < 19.0)
    {
        foot = (SCALE*shoe)+ADJUST;
        printf("%6.1f %13.2f\n", shoe, foot);
        shoe = shoe+1.0;
    }

    return 0;

}





/* Trivia

 * The section of program between and including the braces is called a block.

 * The syntax of the while loop is as follows :-

   while (condition)
   {
       statement(s);
   }

 * A Few Operators :-

   1. = is the assignment operator. It does not mean 'equals'.
      In the context of initialization, = represents initialization,
      not assignment.
      The operand to the right of the assignment operator gets assigned to the
      operand on the left.
      Statements like 2001 = year; are invalid, as a value can't be assigned to
      a constant.
      The purpose of the assignment operator is to store a value at a memory
      location.
      Data object, or simply object, is a region of data storage that can be
      used to hold values.
      Identifying an object can be done in many ways, such as by using the name
      of a variable. lvalue is used to mean any such name/expression that
      identifies a particular object.
      [Object locator value is a better term than lvalue]
      Object refers to the actual data storage, but an lvalue is a label used to
      identify, or locate, that storage.
      The term modifiable lvalue is used to identify an object whose value can
      be changed.
      The term rvalue refers to the quantities that can be assigned to
      modifiable lvalues, but which are not themselves lvalues.
      [Value of an expression is a better term than rvalue]
      [For eg., int ex, why, zee; const int TWO = 2; why = 42; zee = why;
                ex = TWO*(why+zee);
                (a) ex, why and zee are modifiable lvalues. They can be used
                    either on the left side or the right side if an assignment
                    operator.
                (b) TWO is a non-modifiable lvalue, whose value is set to 2
                    using the initialization operator.
                (c) 2 and 42 are rvalues.
                (d) While why and zee are modifiable lvalues, the expression
                    (why+zee) is an rvalue, as it doesn't represent a specific
                    memory location and nothing can be assigned to it. It's just
                    a temporary value the program calculates, and then discards
                    when it's finished with it.]
      In C, multiple assignments are acceptable in a single statement.
      [For eg., a = b = c = 22;
                First, c gets the value 22, then b does, and finally a does,
                i.e., the assignment is done from right to left.]

   2. + is the addition operator.
      It is a binary operator (i.e. it requires two operands).
      It causes the two operands on either side of it to be added together.
      [The + sign can also be used to indicate the algebraic sign of a value.
       When used in this way, it is called a unary operator (i.e. it requires
       only one operand).
       For eg., a = +12]

   3. - is the subtraction operator.
      It is a binary operator.
      It causes the operand after the - sign to be subracted from the operand
      before the sign.
      [The - sign can also be used to indicate/change the algebraic sign of a
       value. When used in this way, it is called a unary operator.
       For eg., a = -12; b = -a;]

   4. * is the multiplication operator.
      It causes the two operands on either side of it to be multiplied.

   5. / is the division operator.
      It causes the operand before the / sign to be divided by the operand after
      the sign.
      In C, any fraction resulting from integer division is discarded, i.e. the
      truncation is done towards zero.

   6. % is the remainder operator (not modulo).
      It gives the remainder that results when the integer before the % sign is
      divided by the integer after the sign.
      [For eg., int a = 5%2; assigns 1 to a
                int a = (-5)%3; assigns -2 to a, whereas a modulo operator
                                                 would assign 1 to a

 * Operator precendence :-

   In C, each operator is assigned a precedence level.
   Whatver is enclosed in parentheses is executed first.
   Multiplication and division have a higher precedence than addition and
   subtraction.
   If two operators having the same precedence share an operand, then they are
   executed according to the order in which they occur in the statement.
   For most operators, the order is from left to right.

 * Order of evaluation :-

   Operator precedence provides vital rules for determining the order of
   evaluation, but it doesn't necessarily determine the complete order.
   [For eg., int a = 6*15+5*20;
             Operator precedence dictates that 6*15 and 5*20 will be calculated
             before addition, but it doesn't tell about which multiplication
             will be done first.
             Here, the left-to-right order of multiplication doesn't apply, as
             the multiplications don't share an operand.]

   [For eg., int a = -(2+5)*6+(4+3*(2+3)); assigns -23 to a]

 */