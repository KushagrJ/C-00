// C17 Standard

#include <stdio.h>


int main(void)
{

    int lower, upper;
    printf("Enter the lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper); printf("\n");

    printf(" Integer       | Square        | Cube          \n");
    printf("---------------|---------------|---------------\n");

    for ( ; lower <= upper; lower++)
        printf(" %-14d| %-14d| %-14d\n", lower, lower*lower, lower*lower*lower);

    return 0;

}
