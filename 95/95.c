// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>
#include <ctype.h>


int location_of_letter(char c);


int main(void)
{

    char c;
    printf("Enter input (EOF to stop): ");

    int location;

    if ((c = getchar()) != EOF)
    {
        putchar('\n');

        location = location_of_letter(c);

        if (location != -1)
            printf("%c is the letter no. %02d\n", c, location);

        else
            printf("%c is not a letter\n", c);
    }

    while ((c = getchar()) != EOF)
    {
        location = location_of_letter(c);

        if (location != -1)
            printf("%c is the letter no. %02d\n", c, location);

        else
            printf("%c is not a letter\n", c);
    }

    return 0;

}


int location_of_letter(char c)
{
    if (isalpha(c))
        return toupper(c) - 64;
    else
        return -1;
}
