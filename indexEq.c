#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if((i)==a[i]){
            printf("%d ",i);
            c++;
        }
    }
    if(c==0){
        printf("-1");
    }
}
