#include<stdio.h>
#include<math.h>
int main()
{
    double radius,area;

    printf("Enter radius : ");
    scanf("%lf",&radius);

    area = 3.1416 * radius * radius;

    printf("Area of circle : %.3lf",area);

    return 0;
}