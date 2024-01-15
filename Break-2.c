#include<stdio.h>
int main()
{
    //Declare a integer type variable called number to store an integer
    int number;

    //Start a for-loop
    //Loop starting from 1,increasing by 1,until 4
    for(number = 1; number <= 4; number++)
    {

        //Print 'The loop works'
        printf("The loop works\n");

        //Start a if statement
        //Check if the number equals to 2 or not
        if(number == 2)

            //if the condition for the if statement is true,then break the loop
            break;

        //If the condition for the if statement is false,then print 'The loop continues'
        printf("The loop continues\n");

    }

    return 0; //The program is executed successfully
}
