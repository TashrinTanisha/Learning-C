#include<stdio.h>
int main()
{
    //Declare an integer type variable called number to store an integer
    int number;

    //Start a for-loop
    //Loop starting from 1,increasing by 1,until 5
    for(number = 1; number <= 5; number++)
    {

        //Print 'The loop works'
        printf("The loop works\n");

        //Start an if statement
        //Check if the condition of the if statement is true or not
        if(number == 4)

            //If it's not,
            continue;

        //then print 'The loop continues'
        printf("The loop continues\n");
    }

    return 0;
}
