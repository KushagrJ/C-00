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





/* Trivia

 * for (int i = 0, char j = 97; ...) doesn't work because declarators of
   different types can't be simultaneously declared and initialized.

 */