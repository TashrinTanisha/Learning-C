#include<stdio.h>
int main()
{
    //Declare an integer type variable called number to store an integer and initialize it to 2
    int number = 2;

    //Start a while loop which continues as long as the value of number is less than or equal to 50
    while(number <= 50)
    {
        //print the current value of number followed by a newline
        printf("%d\n",number);

        //Increment number by 2
        number = number + 2;

    }

    return 0;
}
