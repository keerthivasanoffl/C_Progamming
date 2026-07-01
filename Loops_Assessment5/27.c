#include <stdio.h>
int main(){
    int temp=0,count=0;
    for(int i=1;i<100000;i++){
        temp=i;
        int sum=0;
        for(;temp>0;temp/=10){
            sum += temp%10;
        }
        if(sum==14){
            count++;
        }
    }
    printf("%d",count);
}