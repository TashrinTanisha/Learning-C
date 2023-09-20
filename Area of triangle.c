#include<stdio.h>
int main()
{
   float base,height,area;

   printf("Enter base & height : ");
   scanf("%f %f",&base,&height);

   area = 0.5 * base * height;

   printf("Area of triangle : %f",area);    

   return 0;

}