#include<stdio.h>
int main()
{
    char str[] = "ita" ;

    int ind = 0 ;

    while(1)
    {

        printf("%d = %c\n", ind, str[ind]);

        if(str[ind] == '\0')
        {

            break;

        }

        ind++ ;

    }

    return 0;
}
