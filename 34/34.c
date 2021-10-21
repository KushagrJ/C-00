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





/* Trivia - 34.c

 * The section of program between and including the braces is called a block,
   or a compound statement. It is also considered as a single statement, which
   is made up of simple statement(s).

 * An expression consists of a combination of operators and operands.
   [For eg., x, 4, -6, 4+21, a*(b+c/d)/20, q = 5*2, x = ++q % 3, q > 3, etc.]
 * Every expression has a value.
   [For eg., the value of 9 is 9
             the value of -4+6 is 2
             the value of c = 3+8 is 11
             the value of 5 > 3 is 1
             the value of 2 == 0 is 0
             the value of 6 + (c = 3+8) is 17 (this is valid, but ill-advised)]
   [Although generally, true expressions evaluate to 1 by C, it also considers
    every other non-zero value (i.e. a non zero integer/float or a non-null
    character) as true; only 0 is regarded as false]

 * A statement is a complete instruction to the computer. In C, statements are
   indicated by a semicolon at the end.
   [For eg., hands = 2 is just an expression (which could be a part of a larger
             expression), but hands = 2; is a statement]
 * The simplest statement is a null statement (;), which does nothing.
 * Statements like 8;, a+b;, etc. are valid statements but aren't sensible, as
   they do nothing.
 * Not all complete instructions are statements.
   [For eg., x = (y = 5) + 6;
             Here, y = 5 is a complete instruction, but isn't a statement]
 * An expression statement is a particular kind of statement. It consists of an
   optional expression followed by a semicolon.
   For eg., return foo; is a statement, but it's not an expression statement. It
   contains an expression (foo), but the expression (plus the ;) doesn't make up
   the entire statement.

 * A side effect is the modification of an object or a file.
   [For eg., the main intent of C for days = 7; is to evaluate the expression,
             and 7 gets assigned to days as a side effect (modification of an
             object); similarly, the displaying of information by printf() is a
             side effect (modification of a file)]

 * A sequence point is a point in program execution which ensures that the value
   computations and side effects to its left have been performed, and that the
   value computations and side effects to its right are yet to be performed.
 * Some sequence points ensure that the value computations and side effects of
   everything that comes before them get performed before moving forward (such
   as between the evaluation of a full expression and the next full expression
   to be evaluated), whereas some other sequence points do not (such as the
   various sequence-point operators).
   [Explained later with examples]
 * The C Standard never mentions that the semicolon is a sequence point,
   although in the majority of cases, the semicolon can be considered as a
   sequence point.
   [See https://stackoverflow.com/questions/67784351]
 * Sequence points in C -
   (a) Between the evaluations of the function designator and actual arguments
       in a function call and the actual call
   (b) Between the evaluations of the first and second operands of the operators
       &&, || and ,
   (c) Between the evaluations of the first operand of the conditional ?:
       operator and whichever of the second and third operands is evaluated
   (d) The end of a full declarator
   (e) Between the evaluation of a full expression and the next full expression
       to be evaluated.
       Full expressions - (1) an initializer.
                          (2) the expression in an expression statement.
                          (3) the controlling expression of a selection
                              statement (if or switch).
                          (4) the controlling expression of a while or do
                              statement.
                          (5) each of the expressions of a for statement.
                          (6) the expression in a return statement.
   (f) Immediately before a library function returns
   (g) After the actions associated with each formatted input/output function
       conversion specifier
   (h) Immediately before and immediately after each call to a comparison
       function, and also between any call to a comparison function and any
       movement of the objects passed as arguments to that call

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
   [Since the while statement is a single statement, therefore for a loop such
    as while (condition)
           while (condition)
           {
               statement(s);
           },
    braces are not required for the first while loop - Similarly for others]
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
      Statements like 2001 = year; are invalid.
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
                    either on the left side or the right side of an assignment
                    operator.
                (b) TWO is a non-modifiable lvalue, whose value is set to 2
                    using the initialization operator.
                (c) 2 and 42 are constant expressions, which get evaluated to
                    rvalues.
                (d) While why and zee are modifiable lvalues, the expression
                    (why+zee) is evaluated to an rvalue, as it doesn't represent
                    a specific memory location and nothing can be assigned to
                    it. It's just a temporary value the program calculates, and
                    then discards when it's finished with it.]
      The same identifier can be 'an lvalue' and can also be 'evaluated to an
      rvalue'. For eg., int x = 1; int y = x; - Here, x is an lvalue in the
      first statement and x is evaluated to an rvalue in the second statement.
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

   In C, each operator is assigned a precedence level (applicable only when
   operators share operands).
   Whatever is enclosed in parentheses is executed before/when the results of
   the expressions inside the parentheses are required by the compiler to move
   forward.
   If two operators having the same precedence share an operand, then they are
   executed according to their associativity.
   For most operators, the associativity is from left to right.
   [The complete precedence and order of evaluation are discussed later]

 * Type conversions :-

   Normally, in an expression, the data types of 'the objects referred to by the
   lvalues used in the expression (lvalues are expressions themselves)', 'the
   smaller expressions which are a part of the expression' and 'the values
   obtained after evaluating those expressions' should be the same. But, if
   types are mixed, then C uses a set of rules to make type conversions
   automatically.

   1. The data types of the value of an expression and the expression itself of
      data type char or short are automatically converted to signed int when
      used. These are called promotions.
      [For eg., char x = 'A'; - The data type of the object designated by x is
       char (i.e. the object can only store a char value), but the data types of
       the expression x and the value stored in that object get converted to int
       when used.
       Also, the data type of the expression 'A' is int.]
      [Similar logic for other conversions listed below]
      If sizeof(short) is the same as sizeof(int) on a system, then the data
      type of the value of an expression and expression itself of data type
      unsigned short get converted to unsigned int when used.
      Previously, the data types of the value of an expression and the
      expression itself of data type float used to get converted to double when
      used. But, under the current C Standard, the data types of the value of an
      expression and the expression itself of data type float don't get
      converted to double when used, unless necessary.
      [For eg., previously, float * float produced a double value, but now,
       float * float produces a float value]

   2. In any operation involving expressions of two different types, the data
      types of the value of the expression and the expression itself of lower
      data type are promoted to the higher data type.
      The ranking of types, from highest to lowest, is long double, double,
      float, unsigned long long, long long, unsigned long, long, unsigned int
      and int.
      [For eg., (float * float) + (float * double)
                Here, (float * float) is done without promotion. Promotion
                occurs in (float * double) and the final addition.]

   3. In an assignment/initialization statement, the data types of the final
      calculated value and the entire expression get converted to the data type
      of the object referred to by the lvalue right before the assignment
      occurs.
      This can result in either a promotion or a demotion.
      Demotion can cause implementation-dependent or undefined behaviour in
      certain cases.

   4. When passed as a function argument, the data types of the value of an
      expression and the expression itself of data type char or short are
      converted to int (or unsigned int), and the data types of the value of an
      expression and the expression itself of data type float are converted to
      double.

 * We can also convert types explicitly by using the cast operator, i.e. by
   preceding the quantity with the keyword of the desired data type enclosed in
   parentheses.
   [For eg., num = (int) 1.6 + (int) 2.3;]
   It's good practice to not rely upon automatic conversions, and instead make
   the choice of types explicit.

 * End of Trivia */
