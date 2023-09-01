#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,min,max,m,i;
    scanf("%d %d",&a,&b);
    if(a<b){
        min=a;
        max=b;
    }
    else{
        min=b;
        max=a;
    }
    for(i=1;i<=min;i++){
        if((min%i==0)&&(max%i==0)){
            m=i;
        }
    }
    printf("%d",m);
}