// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>
#include <ctype.h>


int main(void)
{

    char c;

    printf("Enter a lowercase letter (# to exit): ");

    int x;
    while ((x = getchar()) != '#' && x != EOF)
    {
        c = x;

        if (c == '\n')
            continue;

        if (islower(c))
            switch (c)
            {
                case 'a' :
                    printf("Argali, a wild sheep of Asia\n");
                    break;
                case 'b' :
                    printf("Babirusa, a wild pig of Malay\n");
                    break;
                case 'c' :
                    printf("Coati, a racoon-like mammal\n");
                    break;
                default :
                    printf("That's a stumper!\n");
            }
        else
            printf("I recongnize only lowercase letters!\n");

        // To consume and ignore all remaining characters from the input buffer,
        // including the final newline character.
        int y;
        while ((y = getchar()) != '\n' && y != EOF)
            continue;

        printf("Enter a lowercase letter (# to exit): ");
    }

    return 0;

}





/* Trivia

 * continue; causes the rest of the iteration of a loop to be skipped and the
   next iteration to be started. If the continue statement is inside nested
   structures, then it affects only the innermost structure containing it.
 * Another use for continue; is as a placeholder.
 * For the while and do while loops, the next action taken after the continue
   statement is to evaluate the loop test condition.
 * For the for loop, the next action taken after the continue statement is to
   evaluate updation and then the loop test condition.

 * break; causes the program to break free of the loop that encloses it and to
   proceed to the next stage of the program. If the break statement is inside
   nested structures, then it affects only the innermost structure containing
   it.

 * continue; and break; shouldn't be used if they complicate rather than
   simplify a code.

 * To choose between several alternatives, the switch statement is often more
   convenient than the if-else statement.

   The general syntax of a switch statement is as follows :-

   switch (foo)
   {
       case label1 :
           statement(s);
           break;
       case label2 :  // If needed
           statement(s);
           break;
       *** More cases ***  // If needed
       default :
           statement(s);
   }

   [Without break;, every statement from the matched label to the end of the
    switch would be processed]
   [break; works with loops and switch, but continue; works only with loops]
   [If continue; is used with a switch which is inside a loop, then it will
    cause the program to skip over the rest of the loop, including the other
    parts of the switch]
   [foo must be the one with an integer value (including char)]
   [label1, label2, ... must be integer-type (including char) constants or
    expressions containing only integer (including char) constants.
    They cannot be floating-point constants, variables, etc. or expressions
    containing floating-point constants, variables, etc.
    A sizeof expression (among others) is also considered to be an integer
    constant expression, but a const variable isn't, because even though its
    value cannot be changed, it is still a variable.]
   [Multiple labels can be used for the same case like this -
    case label1 :
    case label2 :
        statement(s);
        break;
    Here, due to the absence of break; in case label1, the program would
    process the statement(s) of case label2 if label1 is matched. In essence,
    both the labels would refer to the same statement(s).]
   [The labels cannot be duplicate.
    For eg., switch (x) {case 65: foo; case 'A': bar;} would give an error.]

 * while (getchar() != '\n')
       continue;
   This makes the program read every character the user has input including the
   newline character which stays in the input buffer upon pressing enter
   (for eg., if the user inputs book instead of b), and basically ignore it so
   that for the next getchar(), the input buffer is empty.

 * The goto statement shouldn't be used.

 */
