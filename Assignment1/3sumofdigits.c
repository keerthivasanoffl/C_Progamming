#include<stdio.h>
int main(){
    int n,x,y,z,sum;
    scanf("%d",&n);
    sum=(n/100)+(n/10)%10+n%10;
    printf("The Value: %d",sum);
}