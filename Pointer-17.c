#include<stdio.h>
int main()
{
    int c = 20 ;

    int *ptr = &c ;

    printf("Output : %d\n", c) ;

    printf("Output : %p\n", &c) ;

    printf("Output : %p\n", ptr);

    printf("Output : %d\n", *ptr);

    return 0;
}
