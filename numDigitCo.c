#include<stdio.h>
int main(){
    long long int n,sum=0;
    scanf("%lld",&n);
    while(n){
        sum+=1;
        n/=10;
    }
    printf("%lld",sum);
}
