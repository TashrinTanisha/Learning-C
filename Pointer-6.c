#include<stdio.h>
int main()
{
    int a = 20 ;

    int *ptr ;

    ptr = &a ;

    printf("%d\n", a) ;

    printf("%p\n", &a) ;

    printf("%p\n", ptr) ;

    return 0 ;
}
