#include<stdio.h>
int main()
{
    int a = 20 ;

    int *ptr ;

    ptr = &a ;

    printf("Value of a : %d\n", a) ;

    printf("Value of ptr : %p\n", ptr) ;

    printf("Value of *ptr : %d\n", *ptr) ;

    return 0 ;
}
