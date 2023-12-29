#include<stdio.h>
int main()
{
    char small_letter;

    printf("Enter a small letter alphabet : ");
    scanf("%c",&small_letter);

    if(small_letter == 'a' || small_letter == 'e' || small_letter == 'i' || small_letter == 'o' || small_letter == 'u'){
        printf("Vowel\n");
    }else{
        printf("Consonant\n");
    }

    return 0;
}
