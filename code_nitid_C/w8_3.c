#include <stdio.h>
int n;
int cal(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    return cal(n-1)+cal(n-2);
}
void main(){
    scanf("%d",&n);
    printf("%d",cal(n));
}
