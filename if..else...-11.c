//Write a program which will take a small letter alphabet as input from the user and print whether the alphabet is Vowel or Consonant
#include<stdio.h>
int main()
{
    //Declare a character type variable called alphabet to store a letter
    char alphabet;

    //Take a small letter alphabet as input from the user
    printf("Enter a small letter alphabet : ");
    scanf("%c",&alphabet);

    //Check whether the alphabet is Vowel or Consonant
    //If the alphabet is Vowel
    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ){

        //If it is,print Vowel
        printf("Vowel\n");

    //If it's not,
    }else{

        //then print Consonant
        printf("Consonant");
    }
    return 0;//Indicates that the program ran succesfully
}
