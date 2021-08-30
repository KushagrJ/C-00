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

    long a = 1;

    printf("%d! = ", num);

    while (num > 1)
    {
        printf("%dx", num);
        a = a*num;
        num--;
    }

    printf("%d = %ld\n", 1, a);

}





/* Using recursion :-

#include <stdio.h>


long factorial(int num);


int main(void)
{

    int num;

    printf("Enter a positive integer to know its factorial: ");
    scanf("%d", &num);

    printf("%d! = %ld\n", num, factorial(num));

    return 0;

}


long factorial(int num)
{

    long ans;

    if (num > 0)
        ans = num*factorial(num-1);
    else
        ans = 1;

    return ans;

}

*/





/* Trivia

 * int num in the prototype of factorial() indicates that it takes one argument
   of type int in the form of the variable num, which is declared inside the
   parentheses.
 * Calling a function (and not prototyping or defining a function) creates the
   variables declared as parameters inside the funtion, which are local
   variables. Making a function call such as factorial(10); assigns 10 to num
   inside the factorial() function.
   [When prototyping, void my_function(char ch, int num); can also be simply
    written as void my_function(char, int);. This means that the variable names
    used in a prototype are dummy names and don't have to match the names used
    in the function definition.]
   [The variable names need to be mentioned in the definitions, unlike
    prototypes (where it is optional)]
 * The local variable num of factorial() is different from the local variable
   num of main(). They are just named the same to avoid confusion.
   [The computer treats them as two different variables]
 * When we call factorial() as factorial(num);, the function call passes a value
   (which is the positive integer assigned to num by the user) to the function,
   and this value is called an argument.
   [So, for factorial(num);, the 'value of the variable num of main()' is the
    argument and the 'variable num of factorial()' is the parameter]
 * An argument can be thought of as being the value to which the parameter is
   initialized (i.e., simulataneously declared and assigned) when the function
   is called.
 * An argument can be a constant expression, a variable or even an elaborate
   expression. Regardless of which it is, the argument is evaluated and its
   value is copied to the corresponding parameter.
 * Too many / too few arguments in a function call results in an error.
 * If an argument other than integer is passed to factorial(), then it gets
   automatically converted to int.
 * The return value of a function can be a constant expression, a variable or
   even an elaborate expression.
   [With return, only one value can be sent back to the calling function]
 * Not only can the return value of a function be assigned to a variable, it can
   also be used as part of expressions.
 * The type of the returned value of a function gets automatically converted to
   the type specified in the function header if the type is different.
 * The return statement terminates a function, even if other statements follow.
 * Having an empty return statement (return;) at the end of type void functions
   is optional.
 * Function prototypes can also be placed inside the function using them.
 * The entire function definition can be placed before its first use, making
   the definition acting as its own prototype. This is most commonly done with
   short functions.

 * Just like library functions, user-defined functions don't necessarily need to
   be called. They can simply be defined/prototyped+defined without ever being
   called, but it is probably useless.

 * void my_function(int x, y, z)            // Invalid function header.
   void my_function(int x, int y, int z)    // Valid function header.

 * void my_function(ch, num)
   char ch;
   int num;
   Although this is recognized by the C compiler, it is characterized as
   obsolete.
   [This old form allows headers such as
    void my_function(x, y, z)
    int x, y, z;]

 */
