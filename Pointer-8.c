#include<stdio.h>
int main()
{
    int a = 20 ;

    int *ptr = &a;

    printf("%d\n", a);

    printf("%d\n", *ptr);

    return 0 ;
}
