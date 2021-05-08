// C17 Standard

#include <stdio.h>


int main(void)
{

    char inputString[256];
    int count = 0;

    printf("Enter input (# to stop) :-\n");
    int i = 0;
    int x;
    while ((x = getchar()) != '#' && x != EOF && i < 127)
        inputString[i] = x, i++;
    inputString[i] = '\0';

    for (int j = 0; j < i; j++)
        if (inputString[j] == 'e')
            if (inputString[j+1] == 'i')
                count++;

    printf("The sequence 'ei' occurs %d %s\n",
           count, count == 1 ? "time" : "times");

    return 0;

}