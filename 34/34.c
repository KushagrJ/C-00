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

 * The section of program between and including the braces is called a block,
   or a compound statement.

 * An expression consists of a combination of operators and operands.
   [For eg., 4, -6, 4+21, a*(b+c/d)/20, q = 5*2, x = ++q%3, q > 3, etc.]
 * Every expression has a value.
   [For eg., the value of 9 is 9
             the value of -4+6 is 2
             the value of c = 3+8 is 11
             the value of 5 > 3 is 1
             the value of 2 == 0 is 0
             the value of 6+(c = 3+8) is 17 (this is valid, but ill-advised)]
   [Although true expressions evaluate to 1 by C, it also considers every other
    non-zero value (i.e. a non zero integer/float or a non-null character)
    as true; only 0 is regarded as false]

 * A statement is a complete instruction to the computer. In C, statements are
   indicated by a semicolon at the end.
   [For eg., hands = 2 is just an expression (which could be a part of a larger
             expression), but hands = 2; is a statement]
 * The simplest statement is a null statement (;), which does nothing.
 * Statements like 8;, a+b;, etc. are valid statements but aren't sensible, as
   they do nothing.
 * Not all complete instructions are statements.
   [For eg., x = (y = 5)+6;
             Here, y = 5 is a complete instruction, but isn't a statement]

 * A side effect is the modification of a data object or a file.
   [For eg., the main intent of C for days = 7; is to evaluate the expression,
             and 7 gets assigned to days as a side effect; similarly, the
             displaying of information by printf() is a side effect]
 * A sequence point is a point in program execution at which all side effects
   are evaluated before going on to the next step. In C, the semicolon marks a
   sequence point, among others.

 * The general syntax of the while loop is as follows :-

   while (condition)
   {
       statement(s);
   }

   [The while loop is an entry-controlled loop]
   [For a single statement, the braces are optional]
   [Indenting the statements won't make a difference if they aren't written
    inside braces; only the first statement would be considered part of the
    loop and the remaining statements would be executed after the while loop
    has finished looping]
   [The end of the while loop's test condition marks a sequence point]
   [An example to know how many times a while loop has executed -
    int count = 0;
    while (condition)
    {
        statement(s);
        count++;
    }]

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
      [For eg., int a = 5%3; assigns 2 to a
                int a = (-5)%3; assigns -2 to a
                int a = 5%(-3); assigns 2 to a
                int a = (-5)%(-3) assigns -2 to a]

 * Operator precedence :-

   In C, each operator is assigned a precedence level.
   Whatever is enclosed in parentheses is executed first.
   Multiplication and division have a higher precedence than addition and
   subtraction.
   If two operators having the same precedence share an operand, then they are
   executed according to the order in which they occur in the statement.
   For most operators, the associativity is from left to right.
   [The complete precedence and order of evaluation are dicussed later]

 * Type conversions :-

   Statements and expressions should normally use variables and constants of
   just one type. But, if types are mixed, then C uses a set of rules to make
   type conversions automatically.

   1. When appearing in an expression, char and short (both signed and unsigned)
      are automatically converted to signed int. These are called promotions.
      If short is the same size as int on a system, then unsigned short gets
      converted to unsigned int.
      Previously, float was automatically converted to double. But, under the
      current C standard, float isn't converted to double, unless necessary.
      [For eg., previously, float*float produced a double result, but now,
       float*float produces a float result]

   2. In any operation involving two types, both values are converted to the
      higher ranking of the two types.
      The ranking of types, from highest to lowest, is long double, double,
      float, unsigned long long, long long, unsigned long, long, unsigned int
      and int.
      [For eg., (float*float)+(float*double)
                Here, (float*float) is done without promotion. Promotion occurs
                in (float*double) and the final addition.]

   3. In an assignment statement, the final result of the calculations is
      converted to the type of the variable being assigned the value.
      This can result in either a promotion or a demotion.
      Demotion can cause implementation-dependent or undefined behaviour in
      certain cases.

   4. When passed as function arguments, char and short are converted to int,
      and float is converted to double.

   [https://stackoverflow.com/questions/46073295/implicit-type-promotion-rules]

 * We can also convert types explicitly by using the cast operator, i.e. by
   preceding the quantity with the keyword of the desired data type enclosed in
   parentheses.
   [For eg., num = (int) 1.6 + (int) 2.3;]
   It's good practice to not rely upon automatic conversions, and instead make
   the choice of types explicit.

 */