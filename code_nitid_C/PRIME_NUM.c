#include<stdio.h>
int main(){
    int n,i;
    char ans;
    scanf("%d",&n);
    if(n==1){
        printf("no prime");
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("no prime");
            break;
        }
    }
    if(i==n){
        printf("prime");
    }
}