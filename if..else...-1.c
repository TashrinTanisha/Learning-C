#include<stdio.h>
int main()
{
    int integer;

    printf("Enter the integer : ");
    scanf("%d",&integer);

    if(integer % 2 == 0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }

    return 0;
}
