// C17 Standard

#include <stdio.h>


int main(void)
{

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

 */