#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
int main(){
    int n,max=INT_MIN;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int *b=(int*)calloc(100000,sizeof(int));
    for(i=0;i<n;i++){
        b[a[i]]++;
        if(max<a[i]){
            max=a[i];
        }
    }
    int c=0;
    for(i=0;i<=max;i++){
        if(b[i]>1){
            printf("%d ",i);
            c++;
        }
    }
    if(c==0){
        printf("unique");
    }
}
