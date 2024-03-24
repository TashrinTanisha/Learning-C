/* Write a C program to print the following output :

   Enter your name :
   Tashrin Tarannum Tanisha Ishq //this will be given by user using keyword
   Hello! Tashrin Tarannum Tanisha Ishq */
#include<stdio.h>
int main()
{
    char name[50] ;

    printf("Enter your name :");
    gets(name) ;

    printf("Hello! %s\n", name);

    return 0 ;
}
