#include<stdio.h>
int main(){
    int h,m;
    scanf("%d:%d",&h,&m);
    if((7<=h)&&(h<=9)){
        if((h==7)&&(m>=10)){
            printf("Y");
        }
        else if(h==8){
            printf("Y");
        }
        else if((h==9)&&(m<=30)){
            printf("Y");
        }
        else{
            printf("N");
        }
    }
    else{
        printf("N");
    }
}
