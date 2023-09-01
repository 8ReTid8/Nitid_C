#include<stdio.h>
int main(){
    int m;
    int m1000=0,m500=0,m100=0,m50=0,m20=0,m10=0,m1=0;
    scanf("%d",&m);
    if((0<=m)&&(m<=1000000)){
        if(m>=1000){
            m1000=m/1000;
            m=m%1000;
        }
        if(m>=500){
            m500=m/500;
            m=m%500;
        }
        if(m>=100){
            m100=m/100;
            m=m%100;
        }
        if(m>=50){
            m50=m/50;
            m=m%50;
        }
        if(m>=20){
            m20=m/20;
            m=m%20;
        }
        if(m>=10){
            m10=m/10;
            m=m%10;
        }
        m1=m;
    }
    printf("%d %d %d %d %d %d %d",m1000,m500,m100,m50,m20,m10,m1);
}