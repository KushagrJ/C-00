// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


int main(void)
{

    char firstName[20], lastName[20];

    printf("Enter your first and last names: ");
    scanf("%s %s", firstName, lastName);

    printf("%s, %s\n", lastName, firstName);

    return 0;

}
