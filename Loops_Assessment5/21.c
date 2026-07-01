#include <stdio.h>
int main(){
    int n,count=0,k;
    scanf("%d",&n);
    for(;n>0;n/=10){
        k=n%10;
        if(k%2!=0){
            count++;
        }
    }
    printf("%d",count);
}