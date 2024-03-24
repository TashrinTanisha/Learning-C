#include<stdio.h>
#include<string.h>

int main()
{
    char t[] = "Ishq" ;
    char i[] = "Tanisha" ;

    int s = strcmp(t, i) ;

    if(s == 0)
    {

        printf("t & i is equal\n") ;

    }
    else
    {

        printf("t & i not equal\n") ;

    }

    return 0 ;
}
