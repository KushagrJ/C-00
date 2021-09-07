// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


int main(void)
{

    double arr1[8], arr2[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Enter a number (%d more to go): ", 8-i);
        scanf("%lf", &arr1[i]);
    }

    arr2[0] = arr1[0];
    for (int j = 1; j < 8; j++)
        arr2[j] = arr2[j-1]+arr1[j];

    printf("\n");
    for (int k = 0; k < 8; k++)
        printf("%10.2f ", arr1[k]);
    printf("\n");

    for (int l = 0; l < 8; l++)
        printf("%10.2f ", arr2[l]);
    printf("\n");

    return 0;

}
