// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


void chline(char c, int u, int v);


int main(void)
{

    char c;
    int u, v;

    printf("Enter a character and two integers: ");
    scanf("%c %d %d", &c, &u, &v);

    chline(c, u, v);

    return 0;

}


void chline(char c, int u, int v)
{
    for (int j = 1; j <= v; j++)
    {
        for (int i = 1; i <= u; i++)
            putchar(c);
        printf("\n");
    }
}
