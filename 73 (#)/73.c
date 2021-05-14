// C17 Standard
// Includes input validation.

// After completing C Primer Plus, include input validation in this program
// using a much better method than scanf(), such as @chux's suggestion on
// https://codereview.stackexchange.com/questions/260562/input-validation.
// (Have reasonable ranges of input for different programs, such as in this
//  program, a non-negative input greater than 168.0 should be reported as
//  invalid)

#include <stdio.h>


double calculate_gross_pay(double hoursWorked);
double calculate_taxes(double grossPay);


int main(void)
{

    double hoursWorked;
    printf("Enter the no. of hours worked in a week: ");
    scanf("%lf", &hoursWorked);

    double grossPay, taxes;

    grossPay = calculate_gross_pay(hoursWorked);
    taxes = calculate_taxes(grossPay);

    printf("Gross Pay = $%.2f\n", grossPay);
    printf("Taxes = $%.2f\n", taxes);
    printf("Net Pay = $%.2f\n", grossPay-taxes);

    return 0;

}


double calculate_gross_pay(double hoursWorked)
{
    if (hoursWorked > 40.0)
        return (10.0*40.0)+(1.5*10.0*(hoursWorked-40.0));
    else
        return hoursWorked*10.0;
}


double calculate_taxes(double grossPay)
{
    if (grossPay <= 300)
        return 0.15*grossPay;
    else if (grossPay <= 450)
        return (0.15*300)+(0.2*(grossPay-300));
    else
        return (0.15*300)+(0.2*150)+(0.25*(grossPay-450));
}





/* Later, as an exercise, try to implement all of the features of this program
   using scanf().


   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>


   double get_valid_input(void);
   bool flush(void);


   int main(void)
   {

       printf("Enter the no. of hours worked in a week: ");
       double hoursWorked = get_valid_input();

       return EXIT_SUCCESS;

   }


   double get_valid_input(void)
   {

       double hoursWorked;
       bool endOfFile;

       int a;
       while (true)
       {
           a = scanf("%lf", &hoursWorked);
           endOfFile = flush();

           if (a == 1)
           {
               if (hoursWorked < 0.0)
                   a = 0;
               else
                   break;
           }

           if (a != 1 && endOfFile == true)
               exit(EXIT_FAILURE);

           printf("Invalid input!\n");
           printf("Enter the no. of hours worked in a week: ");
       }

       return hoursWorked;

   }


   bool flush(void)
   {

       int f;
       while ((f = getchar()) != '\n' && f != EOF)
           continue;

       if (f == EOF)
       {
           printf("\n");
           return true;
       }
       else
           return false;

   } */
