#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
        if(a[i]==a[j]){
            printf("%d",a[i]);
            return 0;
        }
        }
    }
    if(i==j)
        printf("unique");
    }
}
