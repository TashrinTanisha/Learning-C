//Write a program which will take a positive integer as input from the user and print whether the integer is even or odd
#include<stdio.h>
int main()
{
    //Declare a variable called integer to store a integer type number
    int integer;

    //Take a positive number as input from the user
    printf("Enter a number : ");
    scanf("%d",&integer);

    //Check the number whether it is even or odd
    //If the number is divisible by 2
    if(integer % 2 == 0)
    {

        //Then print Even
        printf("Even\n");
        //If the number is not divisible by 2
    }
    else
    {

        //Then print Odd
        printf("Odd\n");
    }

    return 0;//Indicates that the program ran successfully
}
