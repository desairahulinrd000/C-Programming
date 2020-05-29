#include <stdio.h>
int main() {
    long int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%ld X %ld = %ld \n", n, i, n * i);
    }
    return 0;
}
