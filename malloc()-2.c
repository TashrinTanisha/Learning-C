#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pointer = (char*)malloc(5 * sizeof(char)) ;

    if(pointer == '\0')
    {

        printf("Memory allocation unsuccessful\n") ;

    }
    else
    {

        printf("Memory allocation successful\n") ;

    }

    return 0 ;
}
