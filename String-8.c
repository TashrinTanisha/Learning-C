/* Write a C program which will take a word as input from the user and print
   the length of the string without using any built in function */
#include<stdio.h>
int main()
{
    char name[50] ;

    printf("Enter your name : ");
    scanf("%s", name);

    int ind = 0, counter = 0;

    while(name[ind] != '\0')
    {

        counter++ ;
        ind++ ;
    }

    printf("The length of the string : %d\n", counter);

    return 0;
}
