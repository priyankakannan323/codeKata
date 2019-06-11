#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int pow=100,c=1,prev=0,cur=1;
    while(n>=10){
        if(n%pow<=26){
            int t=prev;
            prev=cur;
            cur=(t+cur);
        }
        else{
            prev=cur;
        }
        printf("%d-%d-(%d)\n",cur,prev,n);
        n/=10;
    }
    printf("%d",cur);
}
