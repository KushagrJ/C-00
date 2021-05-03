// C17 Standard

#include <stdio.h>


int main(void)
{

    int num;
    printf("Enter a positive integer (>1): ");
    scanf("%d", &num);

    _Bool isPrime = (_Bool) 1;

    if (num > 1)
    {
        printf("%d is divisible by %d & %d, ", num, 1, num);

        for (int i = 2; i*i <= num; i++)
        {
            if (num%i == 0)
            {
                isPrime = (_Bool) 0;
                if (i*i == num)
                    printf("%d, ", i);
                else
                    printf("%d & %d, ", i, num/i);
            }
        }

        if (isPrime == 1)
            printf("\nmaking it a prime number\n");
        else
            printf("\nmaking it a composite number\n");
    }

    else
        printf("The integer is not greater than 1!\n");

    return 0;

}





/* Trivia

 * The general syntax of an if-else statement is as follows :-

   if (condition)
   {
       statement(s);
   }

   else if (condition)  // If needed
   {
       statement(s);
   }

   *** More else if statements ***  // If needed

   else  // If needed
   {
       statement(s);
   }

   [For a single statement, the braces are optional]
   [Indenting the statements won't make a difference if they aren't written
    inside braces; only the first statement would be considered]
   [The current C standard requires that a compiler must support a minimum of
    127 levels of nesting]
   [An else goes with the most recent if, regardless of indentation, unless
    braces state otherwise]

 */