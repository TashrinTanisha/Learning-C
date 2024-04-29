#include<stdio.h>
int main()
{
    int b = 20;

    int *ptr = &b ;

    printf("Output : %d\n", b);

    printf("Output : %p\n", &b);

    printf("Output : %p\n", ptr);

    return 0;
}
