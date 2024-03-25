#include<stdio.h>

struct Student
{

    char name[30] ;
    int id ;
    float cgpa ;

};

int main()
{
    struct Student s ;

    printf("Enter your name : ");
    gets(s.name) ;

    printf("Enter your id : ");
    scanf("%d", &s.id) ;

    printf("Enter your cgpa : ");
    scanf("%f", &s.cgpa) ;

    printf("Your name is - %s,\n id is - %d,\n cgpa is - %f\n", s.name, s.id, s.cgpa);

    return 0 ;
}
