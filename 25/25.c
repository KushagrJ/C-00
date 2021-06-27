// C17 Standard
// Include input validation in version B of this program.

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
 * strlen() is used to find the length of a string. It stops counting when it
   encounters the null character (discussed below).
 * When strlen(foo) is used directly as an argument for printf(), then the
   format specifier to be used with it is %zu.

 * In this program, the C preprocessor is used to define symbolic constants
   (DENSITY and PROMPT) to be used within this program.
 * When this program is compiled, DENSITY and PROMPT get substituted with their
   respective defined values. This is called compile-time substitution. Such
   defined constants are often termed manifest constants.
   [In this program, printf("%s\n", PROMPT); gets replaced with
    printf("%s\n", "Hi! What's your first name?");
    If we give a format specifier in a string item instead of in the
    control-string, then it wouldn't be treated as a format specifier. Rather,
    it would just be treated as a regular string.
    For eg., printf("%s", "%d"); prints %d]
 * Another way to define symbolic constants is to use the const keyword.
   [For eg., const int a = 22;
             const char hello[10] = "Hello";]
 * The const keyword doesn't actually mean that something is constant. It only
   means that the object is read-only.
   Wherever true constants are required in a C program (such as for array sizes
   in non-VLAs), the const keyword cannot be used. In these cases, #define needs
   to be used.
   [In C++, however, the const keyword can be used for proper constants, as
    opposed to C]

 * An array is a collection of several memory cells in a row.
   More formally, it is an ordered sequence of data elements of one type, which
   can be any data type.
   Arrays enable the user to store several items of related information in a
   convenient fashion.
   Brackets are used to identify an array.

 * The elements of an array are accessed by using an integer index, starting
   with 0.
   An array element can be used in the same way as a variable of the same type.
   [For eg., float incomes[20]; declares an array called incomes which can hold
             20 float values.
             incomes[2] = 1.23; assigns 1.23 to the third element of incomes.
             scanf("%f", &incomes[5]); reads a float value into the sixth
             element of incomes.]

 * A pitfall with arrays is that, in the interest of speed of execution, C
   doesn't check to see whether a valid index is used or not.
   So, the compiler won't look to see whether incomes[30] exists or not for a
   statement like incomes[30] = 2.56;, making the program placing this data in
   a location possibly used for other data, potentially corrupting the output of
   the program or even causing it to abort.
   [An example of undefined behaviour]

 * The elements of an array can be looped over with loops by using a variable
   index.

 * To be understood properly after learning arrays and pointers -
   An array can be defined (i.e. declared and initialized) without specifying a
   size. The compiler will infer the size from the initialization statement.
   [For eg., int a[] = {1,2,3};]
   An array can be declared without specifying a size in multiple cases.
   [See 'How to create an array without declaring the size in C' from
    StackOverflow]

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
   that for an array to be a character string, it must have at least one more
   cell than the number of characters to be stored.
   In this program, name can hold upto 39 characters in addition to the null
   character.
   [For eg., 'x' consists of a single character 'x', whereas "x" consists of two
    characters 'x' and '\0']
 * In this program, if Kushagr is given as the input for name, then the first
   seven cells of the char array store Kushagr, the eighth cell stores \0 and
   the remaining 32 cells are garbage (in general).
 * The null character doesn't need to be put in a string manually when enclosed
   in double quotes. The compiler takes care of putting in the null character in
   this case. Also, the null character doesn't need to be put in a string
   manually when used with scanf("%s", foo);. scanf() adds it automatically.
   On the other hand, for eg., if characters are added one by one to an array,
   then the null character will have to be added at the end manually in order to
   make it a string.
   The null character is added by the compiler only if there is room for it.
   [For eg., char name[7] = "Kushagr"; - The compiler doesn't add a null
             character, making name a normal array of characters, instead of a C
             string, as it lacks the null character.]
   Functions defined for C strings, such as strlen(), and functions like
   printf("%s", foo); don't work properly on normal arrays of characters that
   lack the null character. They might work as expected in a few cases, but that
   is mostly by chance (i.e. undefined behaviour).
   Also, the amount of memory to set aside to store a string doesn't need to be
   specified when used with #define.
   [For eg., char arr[] = "Hello"; - The compiler adds a null character at the
             end, making the size of arr 6 bytes.
             char arr[] = "Hello\0" - The compiler adds a null character at the
             end even though it has been added manually, making the size of arr
             7 bytes (Hello + 2 null characters). strlen(arr) returns 5,
             because it can't tell the difference between the null characters.]

 * An issue with taking a string input from the user with scanf() is that the
   input can be larger than the array size, invoking undefined behaviour. But,
   this is easily avoidable by using the positiveInt modifier with scanf(),
   keeping positiveInt one less than the array size, in order to keep room for
   the null character.
   [Because scanf() doesn't know how long the array is, it starts writing from
    the address of the zeroth element of the array and keeps writing until it's
    done. If the user is lucky, they may get some unimportant stuff overwritten,
    but eventually, scanf() would write and write and overwrite something fatal,
    causing segmentation fault.]

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

 * The return value of scanf() is the number of items that it successfully
   reads. If it reads items unsuccessfully, which happens if a non-numeric
   string is given as the input when scanf() expects a number, then it returns
   the value 0.
   It returns EOF (i.e. a negative number) when it detects end of file without
   reading anything, successfully or unsuccessfully.
   [The return value of scanf() is useful for input validation. Checking the
    return value of scanf() against the desired no. of successful readings of
    items automatically covers the possibility of encountering end of file,
    which is a negative number.]

 * gets() (discussed later) is a dangerous function and is in no way a better
   alternative to scanf().

 */
