// C17 Standard

#include <stdio.h>
#include <ctype.h>


int main(void)
{

    char c;
    long numberOfCharacters = 0L;
    int numberOfWords = 0;
    int numberOfLines = 0;

    // To keep track of the beginnings and ends of words.
    _Bool cIsPartOfAWord = 0;

    printf("Enter text to be analysed (| to terminate) :-\n");

    while ((c = getchar()) != '|')
    {
        numberOfCharacters++;

        if (c == '\n')
            numberOfLines++;

        // If c is not a whitespace and not yet part of a word, then it must
        // mark the beginning of a word.
        if (!isspace(c) && !cIsPartOfAWord)
        {
            cIsPartOfAWord = 1;
            numberOfWords++;
        }

        // If c is a whitespace and is being considered part of a word, then it
        // must mark the end of that word.
        if (isspace(c) && cIsPartOfAWord)
            cIsPartOfAWord = 0;
    }

    printf("Number of lines: %d\n", numberOfLines);
    printf("Number of words: %d\n", numberOfWords);
    printf("Number of characters: %ld\n", numberOfCharacters);

    return 0;

}





/* Trivia

 * exp1 && exp2 returns 1 (true) only if both exp1 and exp2 are true
   exp1 || exp2 returns 1 (true) if either exp1 or exp2 is true or if both are
                true
   !exp returns 1 (true) if exp is false, and it returns 0 (false) if exp is
        true
   [For eg., 5 > 2 && 4 > 7 returns 0
             3 && 4 returns 1
             5 > 2 || 4 > 7 returns 1
             0 || -22 returns 1
             !(4 > 7) returns 1
             !24 returns 0]
 * Including the iso646.h header file makes and an alias for &&, or an alias for
   || and not an alias for !.
 * && and || being sequence points makes the use of constructions such as the
   following possible:
   (a) while (x++ < 10 && x+y < 20) - The fact that && is a sequence point
       guarantees that x is incremented before the expression on the right is
       evaluated.
   (b) while ((c = getchar()) != ' ' && c != '\n') - This sets up a loop that
       reads characters up to the first space or newline. Without the order
       guarantee due to && being a sequence point, the compiler might try to
       test the second expression before finding out what value c has.

 * char foo = getchar(); is equivalent to char foo; foo = scanf("%c", &foo);
   The only difference is that using getchar() is faster than using scanf() to
   read a single character.
   Similarly, putchar(foo); is equivalent to printf("%c", foo);, with the only
   difference being speed.
   [getchar() and putchar() are preprocessor macros rather than true functions]

 * The ctype.h header file contains the prototypes of C's standard set of
   functions for analyzing characters.
 * isalpha(foo) returns a non-zero value not necessarily equal to 1 (true) if
   foo is a letter (uppercase or lowercase) and returns zero (false) otherwise.
   [Similarly for other character testing functions]
 * ctype.h's character testing functions -
   isalnum(foo) - tests whether foo is alphanumeric
   isalpha(foo) - tests whether foo is alphabetic
   isblank(foo) - tests whether foo is a space, a horizontal tab, a newline or
                  any additional locale-specific character so specified
   iscntrl(foo) - tests whether foo is a control character, such as Ctrl+B
   isdigit(foo) - tests whether foo is a digit
   isgraph(foo) - tests whether foo is any printing character other than a space
   islower(foo) - tests whether foo is a lowercase character
   isprint(foo) - tests whether foo is a printing character
   ispunct(foo) - tests whether foo is a punctuation character (i.e. any
                  printing character other than a space or an alphanumeric
                  character)
   isspace(foo) - tests whether foo is a whitespace character or any additional
                  locale-specific character so specified
   isupper(foo) - tests whether foo is an uppercase character
   ifxdigit(foo) - tests whether foo is a hexadecimal-digit character
 * ctype.h's character mapping functions -
   (These don't modify the original argument; rather they return the modified
    value)
   tolower(foo) - converts uppercase letters to lowercase letters; no effect on
                  other characters
   toupper(foo) - converts lowercase letters to uppercase letters; no effect on
                  other characters

 */