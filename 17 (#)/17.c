// C11 Standard

#include <stdio.h>


int main(void)
{

    int salary;

    printf("\aEnter your monthly in-hand salary: Rs. ");
    printf("______\b\b\b\b\b\b");

    scanf("%d", &salary);

    printf("\tThat's Rs. %d per annum.", 12*salary);
    printf("\rWow!\n");

    return 0;

}



/* Trivia

 * \a sounds an alert signal.
 * \b\b\b\b\b\b makes the cursor go back six positions. On the systems using destructive backspacing, this won't work.
 * scanf() only reads the user input after it's been called and before the enter key has been pressed. So, the actual
   position of the entered value (i.e. on top of the underscores) doesn't affect scanf().
 * \t moves the cursor to the next tab stop on that line.
 * \r positions the cursor at the beginning of the current line.
 * \n moves the cursor to the next line. \n doesn't always have to be placed at the end of a line.
 * \a, \b and \r don't work on all systems.
 * The output is sent from the output buffer to the screen when (i) the buffer gets full, (ii) a newline character is
   encountered or (iii) there is impending input. A better solution than using \n to send the output to the screen is to
   use fflush().

 */