#include <stdio.h>
int main(){
    int n,x,y;
    scanf("%d",&n);
    x=n%10;
    y=n/100;
    if(x==y){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}