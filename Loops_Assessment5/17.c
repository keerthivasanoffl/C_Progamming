#include <stdio.h>
int main(){
    int n,i,temp=0,sum=0,prime = 1;
    scanf("%d", &n);
    temp=n;
    if (n <= 1)
        prime = 0;
    else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
        for(;temp>0;temp/=10){
            sum = sum + (temp%10);
        }
    }
    if (prime==1&&sum==14){
        printf("Prime and Sum of Digits is 14");
    }
    else if(prime==1&&sum!=14){
        printf("Prime but Sum of Digits is not 14");
    }
    else if(prime==0&&sum==14){
        printf("Not Prime but Sum of Digits is 14");
    }
    else{
        printf("Not Prime and Sum of Digits is not 14");
    }
}