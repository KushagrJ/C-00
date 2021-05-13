// C17 Standard
// Include input validation in version B of this program.

#include <stdio.h>


int main(void)
{

    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    while (terms > 0)
    {
        double sum1 = 0.0;
        for (double i = 1.0; i <= terms; i += 1.0)
            sum1 += 1.0/i;
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + ... upto %d terms = %.2f\n",
               terms, sum1);

        double sum2 = 0.0;
        for (double j = 1.0, k = 1.0; j <= terms; j += 1.0, k *= -1.0)
            sum2 += k*1.0/j;
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - ... upto %d terms = %.2f\n\n",
               terms, sum2);

        printf("Enter the number of terms (<= 0 to quit): ");
        scanf("%d", &terms);
    }

    return 0;

}
