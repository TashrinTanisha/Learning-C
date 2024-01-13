#include<stdio.h>
int main()
{
    //Declare an integer type variable called number to store an integer and initialize it to 1
    int number = 1;

    //Start a do-while loop
    do
    {
        //Print the current value of number followed by a newline
        printf("%d\n",number);

        //Increment number by 1
        number++;

    }
    //Continue the loop as long as the while is less than or equal to 50
    while(number <= 50);

    return 0;
}
