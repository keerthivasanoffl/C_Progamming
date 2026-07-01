#include <stdio.h>
int main() {
    int n, i, temp, digit, count = 0, prime;
    scanf("%d", &n);
    temp = n;
    for (; temp > 0; temp /= 10) {
        digit = temp % 10;
        prime = 1;
        if (digit <= 1)
            prime = 0;
        else {
            for (i = 2; i < digit; i++) {
                if (digit % i == 0) {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime)
            count++;
    }
    printf("%d", count);
    return 0;
}