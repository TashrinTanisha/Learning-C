#include<stdio.h>
int main()
{
    /*Write a for loop which will print the following numbers
    100
    90
    80
    ..
    ..
    0
    */

    //Declare a integer type variable called number to store an integer
    int number;

    //Loop starting from 100,decreasing by 10,until 0
    for(number = 100; number >= 0; number = number - 10)
    {
        printf("%d\n",number);
    }

    return 0;
}
