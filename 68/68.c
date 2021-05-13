// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


int main(void)
{

    char inputString[256];

    printf("Enter input (# to stop) :-\n");
    int i = 0;
    int x;
    while ((x = getchar()) != '#' && x != EOF && i < 255)
        inputString[i] = x, i++;

    printf("ASCII Codes :-\n");

    int j;
    for (j = 0; j < i; j++)
    {
        if (inputString[j] == '\n')
            printf("'\\n' - %3d | ", inputString[j]);
        else if (inputString[j] == '\t')
            printf("'\\t' - %3d | ", inputString[j]);
        else if (inputString[j] == '\b')
            printf("'\\b' - %3d | ", inputString[j]);
        else
            printf(" '%c' - %3d | ", inputString[j], inputString[j]);

        if ((j+1)%8 == 0)
            printf("\n");
    }
    printf("\n");

    return 0;

}
