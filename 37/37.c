// C17 Standard

#include <stdio.h>
#define MINUTES_PER_HOUR 60.0


int main(void)
{

    float minutes, hours;

    printf("Enter the time (in minutes): ");
    scanf("%f", &minutes);

    while (minutes > 0.0)
    {
        hours = (int)(minutes/MINUTES_PER_HOUR);

        printf("%.2f minute(s) is equal to %.2f hour(s) and %.2f minute(s)\n\n",
               minutes, hours, minutes-(hours*MINUTES_PER_HOUR));

        printf("Enter the time (in minutes): ");
        scanf("%f", &minutes);
    }

    return 0;

}