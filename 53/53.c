// C17 Standard

#include <stdio.h>
#include <string.h>


int main(void)
{

    char word[20];
    printf("Enter a word: ");
    scanf("%19s", word);

    printf("In reverse: ");
    for (int i = strlen(word); i >= 0; i--)
        printf("%c", word[i]);
    printf("\n");

    return 0;

}