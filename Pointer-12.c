#include<stdio.h>
int main()
{
    int x = 20, y = 40, z = 60 ;

    int *ptr1 = &x, *ptr2 = &y, *ptr3 = &z ;

    if(*ptr1 > *ptr2 && *ptr1 > *ptr3)
    {

        printf("The largest number is : %d\n", *ptr1) ;

    }
    else if(*ptr2 > *ptr1 && *ptr2 > *ptr3)
    {

        printf("The largest number is : %d\n", *ptr2);

    }
    else
    {

        printf("The largest number is : %d\n", *ptr3);

    }

    return 0 ;
}
