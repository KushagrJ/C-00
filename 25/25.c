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
    char questionAboutWeight[30] = "what's your weight in pounds?";

    printf("%s\n", PROMPT);
    scanf("%s", name);

    printf("%s, %s\n", name, questionAboutWeight);
    scanf("%f", &weight);

    size = sizeof name;
    letters = strlen(name);
    volume = weight/DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
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
 * Another way to define symbolic constants is to use the const keyword.
   [For eg., const int a = 22;
             const char hello[10] = "Hello";]

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
 * The null character doesn't need to be put in a string manually. The compiler
   takes care of putting in the null character.
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

 * char questionAboutWeight[30] = "what's your weight in pounds?"; works but
   char questionAboutWeight[30]; questionAboutWeight = "what's ..."; doesn't,
   because the first one is an initialization statement, whereas the second one
   is an assignment statement, which is not allowed with an array type.

 * Modifiers that can be used with printf(), in the given order :-

   (a) Flags (-, +, space, # and 0) (zero or more flags may be used) -
       1. The minus sign (-) means that the item to be printed will be
          left-justified. The default is right-justified.
          For eg., printf("%10s", "Hello"); prints     Hello
                   printf("%-10s", "Hello"); prints Hello
          [This flag is probably useless if the minimum width is not specified
           or is shorter than the item to be printed]
       2. The plus sign (+) means that signed values will be printed with a plus
          sign, if positive, or a minus sign, if negative.
          For eg., printf("%+d", 22); prints +22
                   printf("%+d", -22); prints -22
                   printf("%+u", 22); prints 22
       3. Space means that signed values will be printed with a space, if
          positive, or a minus sign, if negative.
          For eg., printf("% d", 22); prints  22
                   printf("% d", -22); prints -22
                   printf("% u", 22); prints 22
       4. # prints an initial 0 for %o and an initial 0x/0X for %x/%X. It also
          guarantees that for all floating-point forms, a decimal-point
          character will be printed, even if no digits follow, alongwith
          preventing trailing zeroes to be removed for %g/%G.
          For eg., printf("%o", 22); prints 26
                   printf("%#o", 22); prints 026
                   printf("%x", 22); prints 16
                   printf("%#x", 22); prints 0x16
                   printf("%#.0f", 22.1); prints 22.
                   printf("%#g", 22.1); prints 22.1000
       5. 0 pads the field width with leading zeroes instead of spaces for
          numeric forms. It is ignored if a minus flag is present or if, for an
          integer form, a precision is specified.
          [This flag is probably useless if the minimum width is not specified
           or is shorter than the width of the numeric item to be printed]

   (b) positiveInt -
       It specifies the minimum field width of the item to be printed.
       For eg., printf("%05d", -3); prints -0003

   (c) .positiveInt (only . means .0) -
       It specifies the precision of the item to be printed.
       1. For %s, it gives the maximum number of characters to appear.
       2. For %d/%i/%u/%o/%x/%X, it gives the minimum number of digits to
          appear. Leading zeroes are printed, if required.
          For eg., printf("%.5d", -3); prints -00003
       3. For %a/%A/%e/%E/%f/%F, it gives the exact number of digits to appear
          after the decimal-point character, after rounding-off.
       4. For %g/%G, it gives the maximum number of significant digits.

    (d) * -
        It can be used instead of (b) and/or (c).
        For eg., printf("%*.*d", 1, 2, 2001); is the same as
                 printf("%1.2d", 2001);

 * The return value of print() is the number of characters it printed (including
   characters like whitespaces). If there is an output error, then printf()
   returns a negative value.

 * Modifiers that can be used with scanf(), in the given order :-

    (a) * -
        It is used to skip the input.

    (b) positiveInt -
        It specifies the maximum field width. scanf() stops reading when the
        maximum field width is reached or at the first whitespace, whichever
        comes first.

 */