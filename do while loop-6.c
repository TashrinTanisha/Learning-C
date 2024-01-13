#include<stdio.h>
int main()
{
    //Declare an integer type variable called number to store an integer and initialize it to -10
    int number = -10;

    //Start a do-while loop
    do
    {
        //Print the current value of number followed by a newline
        printf("%d\n",number);

        //Decrement number by -1
        number--;
    }
    //Continue the loop as long as the while is greater than or equal to -20
    while(number >= -20);

    return 0;
}
