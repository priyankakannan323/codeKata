#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return ( *(int*)a - *(int*)b );
}
int reverseNum(int *a,int n){
    int num=0;
    qsort(a,n,sizeof(int),compare);
    for(int i=n-1;i>=0;i--){
       num=num*10+a[i];
    }
    return num;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans=reverseNum(a,n);
    printf("%d",ans);
}
