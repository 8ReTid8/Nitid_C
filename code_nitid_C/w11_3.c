#include <stdio.h>
typedef struct
{
    int m1000;
    int m500;
    int m100;
    int m50;
    int m20;
    int m10;
    int m1;
}money;


money cal(int m){
    money x;
    x.m1000=0,x.m500=0,x.m100=0,x.m50=0,x.m20=0,x.m10=0,x.m1=0;
    if(m>=1000){
        x.m1000=m/1000;
        m=m%1000;
    }
    if(m>=500){
        x.m500=m/500;
        m=m%500;
    }
    if(m>=100){
        x.m100=m/100;
        m=m%100;
    }
    if(m>=50){
        x.m50=m/50;
        m=m%50;
    }
    if(m>=20){
        x.m20=m/20;
        m=m%20;
    }
    if(m>=10){
        x.m10=m/10;
        m=m%10;
    }
    x.m1=m;
    return x;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d %d %d %d %d %d %d",cal(n).m1000,cal(n).m500,cal(n).m100,cal(n).m50,cal(n).m20,cal(n).m10,cal(n).m1);
}