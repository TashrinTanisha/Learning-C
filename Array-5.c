#include<stdio.h>
int main()
{
    float CGPA[12];

    int num;

    for(num = 0; num < 12; num++)
    {

        printf("Enter the value = ");
        scanf("%f",&CGPA[num]);
    }
    for(num = 0; num < 12; num++)
    {

        printf("%.2f\n",CGPA[num]);

    }

    return 0;
}
