#include <stdio.h>
int main() {
    int n, i, j, count = 1, prime;
    n = 9;
    for (i = 3; i < n; i++) {
        prime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}