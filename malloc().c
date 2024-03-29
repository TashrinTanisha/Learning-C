#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int*)malloc(6 * sizeof(int)) ;

    if(ptr == NULL)
    {

        printf("Memory not allocated\n") ;

    }
    else
    {

        printf("Memory allocated successfully\n") ;

    }

    return 0 ;
}
