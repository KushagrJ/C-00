// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


int main(void)
{

    char inputLetter;
    printf("Enter an uppercase letter: ");
    scanf("%c", &inputLetter);

    for (int i = 0; i <= inputLetter-65; i++)
    {
        for (int j = 1; j <= (inputLetter-65)-i; j++)
            printf(" ");
        for (char k = 65; k <= 65+i; k++)
            printf("%c", k);
        for (char l = 64+i; l >= 65; l--)
            printf("%c", l);
        printf("\n");
    }

    return 0;

}
