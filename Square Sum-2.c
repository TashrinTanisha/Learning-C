//Print the summation of squares of all numbers from 5 to 25
#include<stdio.h>
int main()
{
    //Declare an integer type variable called number to store an integer
    //Declare another integer type variable called sum and store 0 in that variable
    int number,sum = 0;

    //Start a for-loop
    //Loop starting from 5,increments by 1,until 25
    for(number = 5;number <= 25;number++){

        //Calculate the summation of squares of all numbers from 5 to 25
        sum = sum + (number * number);
    }

    //Finally,print the summation
    printf("Summation : %d",sum);

    return 0;
}
