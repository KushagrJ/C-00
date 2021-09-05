// C17 Standard
// Include input validation in version B of this program.

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
        switch (inputString[j])
        {
            case '.' :
                inputString[j] = '!';
                numOfSubs++;
                break;

            case '!' :
                numOfSubs++;
                for (int y = i+1; y > j; y--)
                    inputString[y] = inputString[y-1];
                i++;
                j++;
                break;

            default :
                continue;
        }

    printf("Modified version :-\n");
    printf("%s", inputString);

    printf("Number of substitutions: %d\n", numOfSubs);

    return 0;

}
