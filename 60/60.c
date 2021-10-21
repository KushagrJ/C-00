// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


int main(void)
{

    char line[255];

    int i = 0;
    printf("Enter a line: ");
    while ((scanf("%c", &line[i]), line[i] != '\n') && i < 254)
        i++;

    printf("In reverse: ");
    for (int j = i-1; j >= 0; j--)
        printf("%c", line[j]);
    printf("\n");

    return 0;

}





/* Trivia - 60.c

 * In this program,
   (a) Every iteration of scanf() reads a single character from the input
       buffer.
   (b) After the while loop has ended, i is left at the position which is
       occupied by \n, hence j is assigned to i-1.
   (c) while (scanf("%c", &line[i]), line[i] != '\n')
       Here, line[i] != '\n' is evaluated after scanf() and the value of
       line[i] != '\n' is returned for the whole expression.

 * End of Trivia */
