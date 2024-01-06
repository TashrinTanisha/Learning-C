#include<stdio.h>
int main()
{
    int i;

    for(i = 0; i <= 3; i++)
    {
        printf("The loop works\n");
        if(i == 2)

            break;
        printf("This condition works\n");

    }

    return 0;
}
