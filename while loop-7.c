#include<stdio.h>
int main()
{
    //Declare an integer type variable called number to store an integer and initialize it to 1
    int number = 1;

    //Start a while loop which continues as long as the value of number is less than or equal to 50
    while(number <= 50)
    {
        //Check if the current value of number is even(divisible by 2)
        if(number % 2 == 0)
        {
            //If it is then print it followed by a newline
            printf("%d\n",number);
        }

        //Increment number by 1
        number++ ;
    }

    return 0;
}
