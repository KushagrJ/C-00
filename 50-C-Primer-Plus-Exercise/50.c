// C17 Standard

#include <stdio.h>


int main(void)
{

    char letter = 65;

    for (int i = 1; i <= 6; i++)
    {
        for (int count = 1; count <= i; letter++, count++)
            printf("%c", letter);
        printf("\n");
    }

    return 0;

}
