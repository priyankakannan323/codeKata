#include<stdio.h>
int main(){
long long int n;
scanf("%lld",&n);
if(n>0){
printf("Positive");
}
else if(n<0){
printf("Negative");
}
else{
printf("Zero");
}
}
