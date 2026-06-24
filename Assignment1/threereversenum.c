#include<stdio.h>
int main(){
    int n,x,y,z,rev;
    scanf("%d",&n);
    x=n/100;
    y=(n/10)%10;
    z=n%10;
    rev=(z*100)+(y*10)+x;
    printf("The Value: %d",rev);
}