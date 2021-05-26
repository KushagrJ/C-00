// C17 Standard

#include <stdio.h>


int main(void)
{

    printf("n   n cubed\n");

    for (int num = 1; num <= 9; num++)
        printf("%d   %4d\n", num, num*num*num);

    return 0;

}





/* Trivia

 * A Few Relational Operators :-
   1. <  (is less than)
   2. <= (is less than or equal to)
   3. == (is equal to)
   4. >  (is greater than)
   5. >= (is greater than or equal to)
   6. != (is not equal to)
   [These can be used to compare numbers and characters, but not strings]
   [The operators related to equality should generally not be used for
    floating-point values, as round-off errors can prevent two floating-point
    values from being equal, even though logically they should be]
   [The fabs() function, declared in the math.h header file, returns the
    absolute value of a floating-point value]

 * _Bool is the data type name for a boolean variable, i.e. a variable which can
   only have a value of 1 (true) or 0 (false).
   If a non-zero numeric value is assigned to a _Bool variable, it is
   automatically changed to 1.
   Including the stdbool.h header file makes bool an alias for _Bool and defines
   true and false as symbolic constants for the values 1 and 0.

 * The precedence of the relational operators is less than that of the
   arithmetic operators, and greater than that of the assignment operators.
 * Among relational operators, higher precedence - <, <=, >, >=
                               lower precedence - ==, !=
 * Relational operators associate from left to right.
   [For eg., ex != why == zee is the same as (ex != why) == zee.
             First, C checks to see whether ex and why are unequal. Then, the
             resulting value of 1 or 0 is compared with the value of zee.]

 * The general syntax of the for loop is as follows :-

   for (initialization; condition; updation)
   {
       statement(s);
   }

   [The for loop is an entry-controlled loop]
   [For a single statement, the braces are optional]
   [Indenting the statements won't make a difference if they aren't written
    inside braces; only the first statement would be considered part of the
    loop and the remaining statements would be executed after the for loop
    has finished looping]
   [The initialization expression is executed just once, when the loop first
    starts. It doesn't even have to be the initialization of a counter; it can
    be any expression (like printf())]
   [The condition expression is evaluated before each potential execution of the
    loop]
   [The updation expression is executed at the end of each execution of the
    loop. Again, the updation expression doesn't necessarily have to update
    something.]

 * Multiple expressions (not statements) can be written (not necessarily inside
   parentheses) by separating them with commas (used mostly in loops).
   The commas act as sequence points, so all side effects to the left of the
   commas take place before a program moves to the right of the commas.
   For eg., i++, a = i*j becomes no longer undefined (due to the comma
            'operator').
 * (expression1, expression2, expression3, ...) - First, expression1 is
   evaluated, then expression2 is evaluated, then expression3 is evaluated, ...,
   and finally the value of the last expression is returned for the whole
   expression.
 * The comma operator shouldn't be confused with the commas used in fuction call
   expressions, declarations, initializations, etc.
 * For eg., (a) for (int i = 0, char j = 97; ...) doesn't work for the same
                reason as int i = 0, char j = 97; doesn't work, i.e. because
                declarators of different types can't be simultaneously declared
                and initialized.
            (b) The commas in int i, j and int i = 0, j = 97 are separators,
                whereas the commas in i = 0, j = 97 and i++, j++ are operators.
                [int a; a = 1, 2, 3; works fine because of the commas acting as
                 operators (a gets assigned 1 because the comma operator has a
                 lower precedence than the assignment operator). But,
                 int a = 1, 2, 3; gives an error because this is the
                 initialization (simultaneous declaration and assignment) of a,
                 and the comma now becomes a separator, alongwith = now becoming
                 part of an initializer.]
            (c) int i = 1, j = i; isn't undefined because of two sequence points
                (i & j are full declarators and = 1 & = i are initializers). The
                comma is a separator.
                [In int *p[3] = { 0 };, *p[3] is a full declarator and p & p[3]
                 are non-full declarators]

 * for (char ch = 'a'; ch <= 'z'; ch++)
       printf("The ASCII value of %c is %d\n", ch, ch);

   Output - The ASCII value of a is 97
            The ASCII value of b is 98
            The ASCII value of c is 99
            ...
            The ASCII value of y is 121
            The ASCII value of z is 122

 * int y = 55;
   for (int x = 1; y <= 75; y = (++x*5)+50)
       printf("%d  %d\n", x, y);

   Output - 1  55
            2  60
            3  65
            4  70
            5  75

 * One or more expressions can be left blank as well in a for loop.

   int ans = 2;
   for (int n = 3; ans <= 25; )
       ans = ans*n;
   printf("n = %d; ans = %d\n", n , ans);

   Output - n = 3; ans = 54

 * In a for loop, an empty condition is considered to be true. So, for ( ; ; )
   will go on forever.
   But, while, do-while, if, etc. require the condition and leaving it empty
   results in an error.

 * More assignment operators :-
   foo += bar is the same as foo = foo+bar
   foo -= bar is the same as foo = foo-bar
   foo *= bar is the same as foo = foo*bar
   foo /= bar is the same as foo = foo/bar
   foo %= bar is the same as foo = foo%bar
   [These have the same low precedence like =, i.e. less than that of the
    relational and arithmetic operators]

 * The general syntax of the do while loop is as follows :-

   do {
       statement(s);
   } while (condition);

   [The do while loop is an exit-controlled loop]
   [For a single statement, the braces are optional]
   [Indenting the statements won't make a difference if they aren't written
    inside braces; only the first statement would be considered part of the
    loop and the remaining statements would be executed after the do while loop
    has finished looping]
   [The use of do while loops should be restricted to those cases that require
    at least one iteration]

 * Usually, an entry-controlled loop is preferred over an exit-controlled one.

 * What can be done with a while loop can also be done with a for loop, and
   vice versa.
   The for loop is generally used when there is a known number of iterations,
   and the while loop is used when the number of iterations is not known in
   advance.
   The for loop is usually nice because it is concise.

 */
