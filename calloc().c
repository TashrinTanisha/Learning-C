#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int *)calloc(5, sizeof(int)) ;

    if(ptr == NULL)
    {

        printf("Memory allocation unsuccessful\n");

    }
    else
    {

        printf("Memory allocation successful\n");

    }

    return 0 ;
}
