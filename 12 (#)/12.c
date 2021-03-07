// C11 Standard

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

 * The floating-point variable type (float) can hold numbers with decimal points.
 * The f in %f tells the program to print the variable, generally, as a floating-point value.
 * The .2 in %.2f rounds off the value to 2 decimal places. Different compilers have different rules for rounding off,
   especially for the edge cases, such as 22.765.
 * When converting floating-point values to integers, C simply truncates the decimal part, instead of rounding off.
 * %F can also be used instead of %f.
 * scanf() provides keyboard input to the program. The %f instructs scanf() to read a floating-point number from the
   keyboard, and the &weightInKilograms tells scanf() to assign the input value to the variable named weightInKilograms.
 * Pressing the enter key after the input makes the cursor go to the next line. This is the property of the terminal,
   and has nothing to do with scanf(). So, there is no need for a \n right before Your weight is...
 * When the enter key is pressed after the input, a newline character gets stored in the input buffer (different than
   the output buffer), as scanf() doesn't consume the newline character. So, when another scanf() is encountered later
   in the program, a newline character is ready to be read by it.
 * Some format specifiers, such as %d and %f, skip whitespace characters, such as spaces, \n, \t and \r. But, others,
   such as %c, do not. So, if a whitespace character (for eg., \n) is ready to be read by an upcoming
   scanf("%c", &variableName);, it will simply accept the newline character as input and move on to the next statement.
 * scanf(" %c", &variableName); (space can be replaced with \n, \t, \r, etc.) will ignore all leading whitespaces, and
   scanf("%c ", &variableName); (space can be replaced with \n, \t, \r, etc.) will ignore all trailing whitespaces.
   Thus, statements like scanf("%d\n", &variableName); can be troublesome as they will not allow the input to be sent
   to the input buffer on pressing the enter key.

 */