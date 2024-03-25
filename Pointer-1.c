#include<stdio.h>
int main()
{
    int x = 10 ;

    int *p ;

    p = &x ;

    printf("The value of x : %d\n", x);

    printf("The value of *p : %d\n", *p);

    return 0 ;
}
