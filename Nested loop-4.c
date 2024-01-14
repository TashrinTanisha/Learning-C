#include<stdio.h>
int main()
{
    //Declare two integer type variables called num1 & num2 to store two integer
    int num1,num2;

    //Start a for-loop(outer loop)
    //Loop starting from 1,decreasing by 1,until 5
    for(num1 = 1; num1 == 5; num1++)
    {
        //Print the outer loop
        printf("The outer loop\n");

        //Start the second loop(inner loop)
        //Loop starting from 1,decreasing by 1,until 4
        for(num2 = 1; num2 == 4; num2++)
        {
            //Print the outer loop
            printf("This is inner loop\n");
        }
    }

    return 0;
}
