//Write a program to display 'A' to 'Z' using loop:

#include<stdio.h>
int main()
{
    //Declare a character type variable called letter to store character
    char letter;

    //Start a for-loop
    //Loop starting from 'A',increments by 1,until 'Z'
    for(letter = 'A';letter <= 'Z';letter++){

        //Print the letter
        printf("%c ",letter);
    }

    return 0;
}
