#include<stdio.h>
int main()
{
    char ch = 't' ;

    char *ptr = &ch ;

    printf("Output : %c\n", ch);

    printf("Output : %p\n", &ch);

    printf("Output : %p\n", ptr);

    printf("Output : %c\n", *ptr);

    return 0;
}
