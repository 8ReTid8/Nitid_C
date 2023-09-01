#include <stdio.h>
#include <stdlib.h>
int main(){
    int h,w,m,n;
    char name[20],s;
    printf("please enter name : ");
    scanf("%s",&name);
    printf("are you female or male , %s (M,F) : ",name);
    fflush(stdin);
    scanf("%c",&s);
    printf("%s, what is your height in c.m. and weight in k.g. : ",name);
    scanf("%d %d",&h,&w);
    if(s=='M'){
        m=h-105;
    }
    if(s=='F'){
        m=h-110;
    }
    n=m-w;
    printf("%s, your ideal weight is %d kg, you are %d kg %c",name,m,n);
    if(n>0){
        printf("underweight");
    }
    else{
        printf("overweight");
    }
    return 0;
}