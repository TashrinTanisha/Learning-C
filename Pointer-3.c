#include<stdio.h>
int main()
{
    int a = 10, b = 20, c = 30 ;

    int *p1, *p2, *p3 ;

    p1 = &a, p2 = &b, p3 = &c ;

    if(*p1 > *p2 && *p1 > *p3)
    {

        printf("The largest number is : %d\n", *p1);

    }
    else if(*p2 > *p1 && *p2 > *p3)
    {

        printf("The largest number is : %d\n", *p2);

    }
    else
    {

        printf("The largest number is : %d\n", *p3);

    }

    return 0 ;
}
