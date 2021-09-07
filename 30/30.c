// C17 Standard
// This program doesn't include input validation.

#include <stdio.h>


int main(void)
{

    float downloadSpeed, fileSize;

    printf("Enter the download speed (in megabits per second): ");
    scanf("%f", &downloadSpeed);

    printf("Enter the file size (in megabytes): ");
    scanf("%f", &fileSize);

    printf("At %.2f megabits per second, a file of %.2f megabytes\n"
           "downloads in %.2f seconds.\n", downloadSpeed, fileSize,
           (fileSize*8)/downloadSpeed);

    return 0;

}
