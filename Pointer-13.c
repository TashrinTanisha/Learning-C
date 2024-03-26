#include<stdio.h>
int main()
{
    int z = 50 ;

    int *pr = &z ;

    printf("z = %d\n", z);

    printf("*pr = %d\n", *pr);

    printf("z = %p\n", &z);

    printf("pr = %p\n", pr);

    return 0 ;
}
