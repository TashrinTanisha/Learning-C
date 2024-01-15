#include<stdio.h>
int main()
{
    //Declare one integer type variable called number to store an integer
    int number;

    //Declare one character type variable called aphabet to store a character
    char alphabet;

    //Start a for-loop(outer loop)
    //Loop starting from 1,increasing by 1,until 1
    for(number = 1;number == 1;number++){

        //Print 'The capital letters are : '
        printf("The capital lettters are : ");

    //Start the second for-loop(inner loop)
    //Loop starting from 'A',increasing by 1,until 'Z'
    for(alphabet = 'A';alphabet <= 'Z';alphabet++){
            printf("%c ",alphabet);
        }
    }

    return 0;
}
