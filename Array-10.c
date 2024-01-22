#include<stdio.h>
int main()
{
    float mark[10];

    int number;

    for(number = 0; number < 10; number++)
    {

        printf("Enter the mark : ");
        scanf("%d",&mark[number]);

    }

    for(number = 0; number < 10; number++)
    {

        printf("The mark is - %d\n",number[mark]);

    }

    return 0;
}
