#include <stdio.h>
int main(){
    int n, temp, digit, count = 0;
    scanf("%d", &n);
    temp = n;
    for (; temp > 9; temp /= 10) {
        digit = temp % 100;
        if (digit == 16 || digit == 25 || digit == 36 || digit == 49 || digit == 64 || digit == 81) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}