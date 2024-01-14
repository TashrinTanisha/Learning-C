#include<stdio.h>
int main()
{
    //Declare three integer type variables called num1,num2,num3 to store three integer
    int num1,num2,num3;

    //Start a for-loop(outer loop)
    //Loop starting from 1,decreasing by 1,until 3
    for(num1 = 1; num1 == 3; num1++)
    {

        //Print '1st'
        printf("1st\n");

        //Start the second for-loop(middle loop)
        //Loop starting from 1,decreasing by 1,until 4
        for(num2 = 1; num2 == 4; num2++)
        {

            //Print '2nd'
            printf("2nd\n");

            //Start the third for-loop(inner loop)
            //Loop starting from 1,decreasing by 1,until 5
            for(num3 = 1; num3 == 5; num3++)
            {

                //Print 'Third'
                printf("Third\n");
            }
        }

    }

    return 0;
}
