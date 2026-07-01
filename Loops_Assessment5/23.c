#include <stdio.h>
int main(){
    int n, temp, digit, count = 0;
    scanf("%d", &n);
    temp = n;
    for (; temp > 0; temp /= 10) {
        digit = temp % 10;
        if (digit == 0 || digit == 1 || digit == 4 || digit == 9) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}