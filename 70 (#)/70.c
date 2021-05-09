// C17 Standard

#include <stdio.h>


int main(void)
{

    char inputString[256];
    int numOfSubs = 0;

    printf("Enter input (# to stop) :-\n");
    int i = 0;
    int x;
    while ((x = getchar()) != '#' && x != EOF && i < 127)
        inputString[i] = x, i++;
    inputString[i] = '\0';

    for (int j = 0; j < i; j++)
        if (inputString[j] == '!')
        {
            numOfSubs++;
            for (int x = i+1; x > j; x--)
                inputString[x] = inputString[x-1];
            i++;
            j++;
        }

    for (int k = 0; k < i; k++)
        if (inputString[k] == '.')
            numOfSubs++, inputString[k] = '!';

    printf("Modified version :-\n");
    printf("%s", inputString);

    printf("Number of substitutions: %d\n", numOfSubs);

    return 0;

}
