/*Write a program which will take an integer N from user and print all the numbers between N to -32.Stop your
  program when user will give N= -1 as input */
#include <stdio.h>
int main() {
    int N, n;

    while (1) {
        printf("Enter the value of N (input -1 to stop): ");
        scanf("%d", &N);

        if (N == -1)
            break;
        if (N > -32) {
            for (n = N; n > -32; n--) {
                printf("%d\n", n);
            }
        } else {
            for (n = N; n < -32; n++) {
                printf("%d\n", n);
            }
        }
    }
    printf("The program is stopped\n");
    return 0;
}
