#include<stdio.h>
int main()
{
    //Declare an integer type variable called number to store an integer
    int number;

    //Start a for-loop
    //Loop starting from 1,increasing by 1,until 15
    for(number = 1; number <= 15; number++)
    {

        //Print 'The loop works'
        printf("The loop works\n");

        //Start a if statement
        //Check if the number is divisible by 2 or not
        if(number % 2 == 0)

            //If it's not,
            continue;

        //then print the number
        printf("%d\n",number);
    }
    return 0;
}
