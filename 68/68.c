// C17 Standard

#include <stdio.h>


int main(void)
{

    char inputString[256];

    printf("Enter input (# to stop) :-\n");
    int i = 0;
    while ((inputString[i] = getchar()) != '#' && i < 255)
        i++;

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