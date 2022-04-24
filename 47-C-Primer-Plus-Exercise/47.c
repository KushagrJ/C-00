// C17 Standard

#include <stdio.h>


int main(void)
{

    char letters[26];

    for (int i = 0, j = 97; j < 123; i++, j++)
        letters[i] = (char) j;

    for (int k = 0; k < 26; k++)
        printf("%c", letters[k]);
    printf("\n");

    return 0;

}
