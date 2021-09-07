// C17 Standard
// This program includes input validation.

// After completing C Primer Plus, include input validation in this program
// using a much better method than scanf(), such as @chux's suggestion on
// https://codereview.stackexchange.com/questions/260562/input-validation.
// (Have reasonable ranges of input for different programs, such as in this
//  program, a non-negative input greater than 168.0 should be reported as
//  invalid)

// For single inputs, let the user use only EOF to terminate input.
// For multiple inputs, let the user use ENTER to terminate every input, and
// additionally, let them use use EOF to terminate the final input.
// Using clearerr(stdin) is not a good idea.




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

