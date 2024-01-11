#include<stdio.h>
int main()
{
    int y ;

    //Declare a integer type variable called y to store an integer
    printf("Enter the value of y : ");
    scanf("%d",&y);

    //Switch statement
    switch(y)  //Switch statement starts with the from the keyword swtich followed by the expression to be evaluated
    {

    case 4 ://Case represents different possible values of the expression

        printf("Value of y matches with the 1st case");

        break;//If the value of expression matches with the case,the break is executed until break is declared

    case 8 :

        printf("Value of y matches with the 2nd case");

        break;//break is crucial,without this the code will not ahead to the next case

    case 12 :

        printf("Value of y matches with the 3rd case");

        break;

        default;//If the value of expression doesn't match with the case then default works

        printf("Value is unknown\n");

    }

    return 0;
}
