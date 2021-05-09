// C17 Standard

#include <stdio.h>


int main(void)
{

    char name[20];
    float heightInInches;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your height (in inches): ");
    scanf("%f", &heightInInches);

    printf("%s, you are %.3f feet tall\n", name, heightInInches/12);

    return 0;

}
