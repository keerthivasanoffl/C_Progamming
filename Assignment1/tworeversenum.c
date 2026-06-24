#include<stdio.h>
int main(){
    int n,x,y,z,rev;
    scanf("%d",&n);
    y=n/10;
    z=n%10;
    rev=(z*10)+y;
    printf("The Value: %d",rev);
}