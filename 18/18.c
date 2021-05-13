// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


int main(void)
{

    int asciiCode;

    printf("Enter an ASCII code: ");
    scanf("%d", &asciiCode);

    printf("The character with ASCII code %d is %c\n", asciiCode, asciiCode);

    return 0;

}
