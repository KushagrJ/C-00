// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


int main(void)
{

    int inputNum;
    int i = -1;

    printf("Enter an integer: ");
    scanf("%d", &inputNum);

    while (i++ < 10)
        printf("%d ", inputNum+i);
    printf("\n");

    return 0;

}
