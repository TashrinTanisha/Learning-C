#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int *)malloc(4 * sizeof(int));

    if(ptr == NULL){

        printf("Memory allocation unsuccessful\n");

    }else {

        printf("Memory allocation successful\n");

    }

    ptr = realloc(ptr, 30);


    return  0 ;
}
