#include<stdio.h>
int main()
{
    //Declare two integer type variables called num1,num2 to store two integer
    int num1,num2;

    //Start a for-loop(outer loop)
    for(num1 = 1; num1 <= 2; num1++)
    {

        //Start the second for-loop(inner loop)
        for(num2 = 1; num2 <= 4; num2++)
        {

            //Print 'Asterisk'
            printf("*");

        }
        //Print a newline
        printf("\n");
    }
    return 0;
}
