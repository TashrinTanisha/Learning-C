#include<stdio.h>
int main()
{
    char a = 'C';

    //Switch statement
    switch(a)//The switch statement starts with the keyword switch followed by the expression to be evaluated
    {

    case 'A' ://case represents different possible values of the expression

        printf("case 'A' works\n");
        break;//If the value of the expression matches a case,the code is executed until a break is declared

    case 'B' :

        printf("case 'B' works\n");
        break;//The break is crucial,without this the code will not ahead to the next case

    case 'C' :

        printf("case 'C' works\n");
        break;

    default ://If there's no match,the default case is executed

        printf("Nothing works\n");

    }

    return 0;
}
