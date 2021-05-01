// C17 Standard

#include <stdio.h>


int main(void)
{

    int integers[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Enter integer no. %d: ", i+1);
        scanf("%d", &integers[i]);
    }

    printf("In reverse: ");
    for (int j = 7; j >= 0; j--)
        printf("%d ", integers[j]);
    printf("\n");

    return 0;

}