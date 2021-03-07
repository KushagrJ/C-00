// C11 Standard

#include <stdio.h>


void br(void);
void ic(void);


int main(void)
{

    br();

    printf(", ");

    ic();

    printf("\nIndia, China,\nBrazil, Russia\n");

    return 0;

}


void br(void)
{
    printf("Brazil, Russia");
}


void ic(void)
{
    printf("India, China");
}