// C17 Standard

#include <stdio.h>


int main(void)
{

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 70, count = 1; count <= i; j--, count++)
            printf("%c", (char) j);
        printf("\n");
    }

    return 0;

}
