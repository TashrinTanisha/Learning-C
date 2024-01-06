#include<stdio.h>
int main()
{
    int i;

    for(i = 0; i <= 3; i++)
    {
        printf("The loop works\n");

        if(i == 2)
            continue;

        printf("The condition works\n");
    }

    return 0;
}
