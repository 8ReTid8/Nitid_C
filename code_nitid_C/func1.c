#include <stdio.h>
#include <math.h>
int cal(int x){
    int y=0;
    if(x<0){
        y=(x*x)+(x+2)*(x+3);
    }
    if(x==0){
        y=0;
    }
    if(x>0){
        y=x-2;
    }
    return y;
}
void main(){
    int x;
    scanf("%d",&x);
    printf("%d",cal(x));
}
