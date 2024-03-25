#include<stdio.h>
int main()
{
    int num1 = 60, num2 = 40 ;

    int *ptr1 = &num1, *ptr2 = &num2 ;

    int sum = *ptr1 + *ptr2 ;

    printf("The sum is : %d\n", sum);

    return 0 ;
}
