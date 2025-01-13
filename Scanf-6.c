#include<stdio.h>
int main()
{
    float x, y;

    printf("Enter the value of x & y:");
    scanf("%f %f", &x, &y);

    printf("You entered: %.2f & %.2f", x, y);

    return 0;
}
