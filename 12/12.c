// C17 Standard

#include <stdio.h>


int main(void)
{

    float weightInKilograms, weightInPounds;

    printf("Enter your weight (in kilograms): ");

    scanf("%f", &weightInKilograms);

    weightInPounds = 2.20462*weightInKilograms;

    printf("Your weight (in pounds) is %.2f\n", weightInPounds);

    return 0;

}





/* Trivia

 * The floating-point variable type (float) can hold numbers with decimal
   points.
 * The f in %f tells the program to print the variable, generally, as a
   floating-point value.
 * The .2 in %.2f rounds off the value to 2 decimal places. Different compilers
   have different rules for rounding off, especially for the edge cases, such as
   22.765.
 * When converting floating-point values to integers, C simply truncates the
   decimal part, instead of rounding off.
   [The truncation is done towards zero. For eg., int a = 12/5; will make a = 2,
    and int a = -22/6; will make a = -3.]
 * %F can also be used instead of %f.

 * scanf() provides keyboard input to the program. It converts string input into
   various forms - integers, floating-point numbers, characters and C strings.
 * The %f instructs scanf() to read a floating-point number from the keyboard,
   and the &weightInKilograms tells scanf() to assign the input value to the
   variable named weightInKilograms.
 * Pressing the enter key after the input makes the cursor go to the next line.
   This is the property of the terminal, and has nothing to do with scanf(). So,
   there is no need for a \n right before Your weight is...
 * When the enter key is pressed after the input, a newline character gets
   stored in the input buffer (different than the output buffer), as scanf()
   doesn't consume the newline character. So, when another scanf() is
   encountered later in the program, a newline character is ready to be read by
   it.
 * Some format specifiers, such as %d, %f and %s, skip leading whitespaces, such
   as spaces, \n, \t and \r. But, others, such as %c, do not. So, if a
   whitespace character (for eg., \n) is ready to be read by an upcoming
   scanf("%c", &variableName);, it will simply accept the newline character as
   input and move on to the next statement.
 * scanf(" %c", &variableName); (space can be replaced with \n, \t, \r, etc.)
   will ignore all leading whitespaces, and
   scanf("%c ", &variableName); (space can be replaced with \n, \t, \r, etc.)
   will ignore all trailing whitespaces.
   Thus, statements like scanf("%d\n", &variableName); can be troublesome as
   they will not allow the input to be sent to the input buffer on pressing the
   enter key.

 * scanf() stops reading at the first whitespace it encounters.
   [For eg., if K J is given as the input for the first scanf() in
    char a, b; scanf("%c", &a); scanf(" %c", &b); printf("%c %c", a, b);,
    then J will automatically be taken as the input for the second scanf(), due
    to J getting stored in the input buffer, and K J will get printed]
   [Since a char variable can hold a single character, therefore if KJ is given
    as the input for the first scanf() in the above example, then also K J will
    get printed]
   [scanf() leaves all of the trailing newline (or whitespace) onward characters
    in the input buffer with any specifier. If the positiveInt modifier is used
    with it, then it leaves all of the remaining characters in the input buffer
    when the limit is reached.]

 * scanf() successfully reads as many valid non-whitespace characters as entered
   (unless the positiveInt modifier is used with it), even if the target
   variable, etc. isn't large enough to hold the input, causing overflows.
   What happens afterwards is undefined behaviour.
   [For eg., If 123456789123456789 is given as input for a scanf("%d", &foo);]

 * %d and %i are both used to specify a signed decimal integer when used for
   output (for eg., with prinf()).
   But, for input (for eg., with scanf()), %i also allows hexadecimal
   (if preceded by 0x) and octal (if preceded by 0), in addition to decimal. So,
   033 would be 27 with %i but 33 with %d.

 * For numerical specifiers, scanf() also accepts the signs + and - in front of
   the numbers, if entered.

 * A few examples of multiple inputs using scanf() -
   1. scanf("%d %d", &a, &b); expects the input as int1 int2
   2. scanf("%d,%d", &a, &b); expects the input as int1,int2
      [%d ignores whitespaces, so int1, int2 will work as well, and so on]
   3. scanf("%d%d", &a, &b); behaves the same as scanf("%d %d", &a, &b);
   and so on


 */