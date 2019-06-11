#include<stdio.h>
#include<math.h>
int main(){
    long long int n,m;
    scanf("%lld%lld",&n,&m);
    double ans=pow((double)n,(double)m);
    printf("%.0lf",ans);
}
