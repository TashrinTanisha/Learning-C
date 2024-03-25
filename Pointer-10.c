#include<stdio.h>
int main()
{
    int num1, num2 ;

    printf("Enter num1 & num2 : ");
    scanf("%d %d", &num1, &num2);

    int *ptr1 = &num1, *ptr2 = &num2 ;

    int mul = *ptr1 * *ptr2 ;

    printf("The Mulplication is : %d\n", mul);

    return 0 ;
}
