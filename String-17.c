#include<stdio.h>
#include<string.h>

int main()
{
    char t[] = "Ishq" ;
    char i[] = "Tanisha" ;

    strcat(t, i) ;

    printf("t = %s\n", t);

    printf("i = %s\n", i);

    return 0 ;
}
