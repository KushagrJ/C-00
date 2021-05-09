// C17 Standard

#include <stdio.h>


int main(void)
{

    int powersOf2[8];
    int power = 1;

    for (int i = 0; i < 8; i++)
    {
        power *= 2;
        powersOf2[i] = power;
    }

    printf("The first eight powers of 2 :-\n");
    printf("%d", powersOf2[0]);

    int j = 1;
    do {
        printf(", %d", powersOf2[j]);
        j++;
    } while (j < 8);
    printf("\n");

    return 0;

}
