#include<stdio.h>
int main()
{
    int number[8];

    int num;

    for(num = 0; num < 8; num++)
    {

        printf("Enter the value : ");
        scanf("%d",&number[num]);
        printf("The value is : %d\n",number[num]);

    }

    return 0;
}
