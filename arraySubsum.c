#include<stdio.h>
int main(){
    long long int n,m,i,sum=0;
    scanf("%lld%lld",&n,&m);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%1d",&a[i]);
        if(i<m){
            sum+=a[i];
        }
    }
    printf("%lld",sum);
}
