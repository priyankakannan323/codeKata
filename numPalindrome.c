#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0,safe=n;
    while(n){
        rev=(rev*10)+n%10;
        n/=10;
    }
    if(safe==rev){
        printf("yes");
    }
    else{
        printf("no");
    }
}
