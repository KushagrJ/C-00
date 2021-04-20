// C17 Standard

#include <stdio.h>


int main(void)
{

    int age;
    float SECONDS_PER_YEAR = 3.156e+7;

    printf("Enter your age (in years): ");
    scanf("%d", &age);

    printf("You are approximately %.0f seconds old!\n", SECONDS_PER_YEAR*age);

    return 0;

}