/* Write a program which will take one person's age as input from the user and print his/her status according
   to the given oonditions */
#include<stdio.h>
int main()
{
    //Declare a integer type variable called age to store a whole number
    int age;

    //Take one person's age as input from the user
    printf("Enter age : ");
    scanf("%d",&age);

    //Check whether the person's age is below 2 or not
    if(age < 2)
    {

        //If his/her status is according to the given oondition,then print Infant
        printf("Infant\n");

    }
    //If it's not,
    //Then check if the person's age is according to the given condition,
    else if(age >= 2 && age < 10)
    {

        //If it's, then print Child
        printf("Child\n");

    }
    //If it's not,
    //Then check if the person's age is according to the given condition,
    else if(age >= 10 && age < 20)
    {

        //If it's,then print Teenage
        printf("Teenage\n");

    }
    //If it's not,
    //Then check if the person's age is according to the given condition,
    else if(age >= 20 && age < 30)
    {

        //If his/her status is according to the given oondition,then print Adult
        printf("Adult\n");

    }
    //If it's not agreeable to these conditions,
    else
    {

        //then print Old
        printf("Old\n");
    }

    return 0;
}
