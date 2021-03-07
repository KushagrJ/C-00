// C11 Standard

#include <stdio.h>


void jolly(void);
void deny(void);


int main(void)
{

    printf("For he's a jolly good fellow!\n");

    jolly();

    printf("For he's a jolly good fellow!\n");

    deny();

    return 0;

}


void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}


void deny(void)
{
    printf("Which nobody can deny!\n");
}