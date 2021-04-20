// C17 Standard

#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
#define PROMPT "Hi! What's your first name?"


int main(void)
{

    float weight, volume;
    int size, letters;
    char name[40];

    printf("%s\n", PROMPT);
    scanf("%s", name);

    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);

    size = sizeof name;
    letters = strlen(name);
    volume = weight/DENSITY;

    printf("Well, %s, your volume is %.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;

}





/* Trivia

 * string.h contains the prototype of the strlen() function, among others.

 * In this program, the C preprocessor is used to define symbolic constants
   (DENSITY and PROMPT) to be used within this program.
 * When this program is compiled, DENSITY and PROMPT get substituted with their
   respective defined values. This is called compile-time substitution. Such
   defined constants are often termed manifest constants.

 * An array is a collection of several memory cells in a row. More formally, it
   is an ordered sequence of data elements of one type.
   Brackets are used to identify an array.

 * C does not have a native string data type. By convention, the language uses
   arrays of char for strings.
 * In this program, the array is a series of 40 consecutive bytes in memory,
   each able to hold a single char value.
 * The %s specifier is used to handle the input and output of a string. name,
   unlike weight, doesn't use the & prefix when used with scanf().
 * Double quotes are used to identify a string, just like single quotes are used
   to identify a character.
 * In general, scanf() is used with %s to read only a single word, not a whole
   phrase, as a string, since it stops reading at the first whitespace it
   encounters.

 * C uses the null character, i.e. \0, to mark the end of a string. It means
   that an array for a string must have at least one more cell than the number
   of characters to be stored.
   In this program, name can hold upto 39 characters in addition to the null
   character.
   [For eg., 'x' consists of a single character 'x', whereas "x" consists of two
    characters 'x' and '\0']
 * In this program, if Kushagr is given as the input for name, then the first
   seven cells of the char array store Kushagr, the eighth cell stores \0 and
   the remaining 32 cells are garbage (in general).
 * The null character doesn't need to be put in a string manually when used with
   #define or scanf(). The compiler takes care of putting in the null character.
   Also, the amount of memory to set aside to store a string doesn't need to be
   specified when used with #define.

 * sizeof is an operator (not a function) which returns the amount of memory
   (in bytes) that a quantity or a type occupies.
 * For quantities, sizeof foo and sizeof(foo) can both be used.
   For types, sizeof(type) is used.
 * When sizeof foo is used directly as an argument for printf(), then the format
   specifier to be used with it is %zu.
   In this program, the return value of sizeof name is assigned to the integer
   size, so the usual %d specifier is used to print size, instead of %zu.
   [It is best to use a variable with sizeof (as in this program), as opposed to
    directly using sizeof foo as an argument for printf()]
   [For eg., printf("%zu", sizeof(char)); prints 1
             printf("%zu", sizeof 22); prints 4 on this system]

 * strlen() is used to find the length of a string. It stops counting when it
   encounters the null character.
 * When strlen(foo) is used directly as an argument for printf(), then the
   format specifier to be used with it is %zu.

 * To be learned later -
   The C equivalent of Python's a = "My name is Kushagr"; print(a).

 */