#include<stdio.h>
int main()
{
    int number[10];

    int num;

    for(num = 0; num < 10; num++)
    {

        printf("Enter the value : ");
        scanf("%d",&number[num]);
        printf("%d\n",number[num]);

    }

    return 0;
}
