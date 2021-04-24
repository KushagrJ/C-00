// C17 Standard

#include <stdio.h>
#include <string.h>


int main(void)
{

    char firstName[20];
    int nameLength;

    printf("Enter your first name: ");
    scanf("%s", firstName);
    nameLength = strlen(firstName);

    printf("\"%s\"\n", firstName);
    printf("\"%20s\"\n", firstName);
    printf("\"%-20s\"\n", firstName);
    printf("%*s\n", nameLength+3, firstName);

    return 0;

}