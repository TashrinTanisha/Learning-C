#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Value of a : ");
    scanf("%d",&a);

    printf("Value of b : ");
    scanf("%d",&b);

    printf("Value of c : ");
    scanf("%d",&c);

    float average = (a+b+c)/3;

    printf("Average of a,b & c : %.1f",average);

   return 0;
}
