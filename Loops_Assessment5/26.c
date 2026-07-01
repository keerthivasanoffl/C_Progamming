#include <stdio.h>
int main(){
    int n=9999;
    for(n=9999;n>1000;n--){
        if((n%7==0)&&(n%9==0)){
            printf("%d",n);
            break;
        }
    }
}