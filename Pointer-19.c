#include<stdio.h>
int main()
{
    double cgpa = 3.50;

    double *ptr = &cgpa ;

    printf("Output : %.2lf\n", cgpa);

    printf("Output : %p\n", &cgpa);

    printf("Output : %p\n", ptr);

    printf("Output : %.2lf\n", *ptr);

    return 0 ;
}
