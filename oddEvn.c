#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    if(n<0){
        printf("invalid");
    }
    else{
    if(n%2==0){
        printf("Even");
    }
    else if(n%2!=0){
        printf("Odd");
    }
    }

}
