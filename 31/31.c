// C17 Standard

#include <stdio.h>
#include <string.h>


int main(void)
{

    char firstName[20], lastName[20];

    printf("Enter your first and last names: ");
    scanf("%s %s", firstName, lastName); printf("\n");

    printf("%s %s\n", firstName, lastName);
    printf("%*zu %*zu\n\n", (int) strlen(firstName), strlen(firstName),
                            (int) strlen(lastName), strlen(lastName));

    printf("%s %s\n", firstName, lastName);
    printf("%-*zu %-*zu\n", (int) strlen(firstName), strlen(firstName),
                            (int) strlen(lastName), strlen(lastName));

    return 0;

}
