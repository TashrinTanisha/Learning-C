#include<stdio.h>
int main()
{
    // Write a for loop which will print the summation of all numbers which are divided by 3 & 5 between 30 to 120

    //Declare a integer type variable called number to store an integer
    int number,sum = 0;

    //Loop starting from 30,decreasing by 1,until 120
    for(number = 30; number <= 120; number++)
    {
        //Check if the number is divisible by 3 and 5
        if(number % 3 == 0 && number % 5 == 0)
        {
            //Summation of all numbers which are divided by 3 & 5 between 30 to 120
            sum = sum + number;
        }
    }

    //Print the summation
    printf("Summation : %d\n",sum);

    return 0;//Indicates that the program ran succesfully
}
