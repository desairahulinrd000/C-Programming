#include <stdio.h>
int main() {
    unsigned long long n, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%llu", &n);
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Reversed number = %llu", rev);
    return 0;
}
