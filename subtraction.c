#include<stdio.h>
int main()
{
    int num1,num2,sub;
    
    printf("Enter num1 & num2 : ");

    scanf("%d %d",&num1,&num2);

    sub = num1 - num2;

    printf("Sub : %d",sub);

    return 0;
}