#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans=a[0];
    for(i=1;i<n;i++){
        ans=ans^a[i];
    }
    printf("%d",ans);
}
