#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,j,k;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //qsort(a,n,sizeof(int),compare);
    for(i=0;i<n;i++){
        for(j=i+1;j<n && i!=j ;j++){
           for(k=j+1;k<n && k!=i && k!=j ;k++){
            if(a[i]+a[j]==a[k]&&a[i]<=a[j]){
                printf("%d %d %d\n",a[i],a[j],a[k]);
            }
           }
        }
    }
}
