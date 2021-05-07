// C17 Standard

#include <stdio.h>


int main(void)
{

    char c;
    int spaces = 0;
    int newlines = 0;
    long other = 0L;

    printf("Enter input (# to stop) :-\n");

    while ((c = getchar()) != '#')
    {
        if (c == ' ')
            spaces++;
        else if (c == '\n')
            newlines++;
        else
            other++;
    }

    printf("No. of spaces = %d\n", spaces);
    printf("No. of newlines = %d\n", newlines);
    printf("No. of other characters = %ld\n", other);

    return 0;

}