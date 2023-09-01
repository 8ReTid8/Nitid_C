#include <stdio.h>
int cal(int x){
    if(x==1){
        return 1;
    }
    else{
        return x+ cal(x-1);
    }
}
void main(){
    int n; 
    scanf("%d",&n);
    printf("%d",cal(n));
}