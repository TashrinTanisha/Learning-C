#include<stdio.h>
int main()
{
    char x = 'z' ;

    char *p ;

    p = &x ;

    printf("Value of x is : %c\n", x);

    printf("Value of *p is : %c\n", *p);

    return 0 ;
}
