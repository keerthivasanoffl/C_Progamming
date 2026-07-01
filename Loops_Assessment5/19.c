#include <stdio.h>
int main(){
    int n, i, prime = 1,k,l;
    scanf("%d", &n);
    l=n/10;
    k=l%100;
    if (n <= 1)
        prime = 0;
    else {
        for (i = 2; i < k; i++) {
            if (k % i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if (prime)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}