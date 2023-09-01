#include<stdio.h>
#include<string.h>
int main(){
    int n;
    int ans[8],num[10],i;
    scanf("%d",&n);


    if(n%2==0){
        ans[0]=1;
    }
    else{
        ans[0]=0;
    }


    if(n%2==0){
        ans[1]=0; 
    }
    else{
        ans[1]=1;
    }
    

    if(n%2==0){
        if(n%4==0){
            ans[2]=0;
        }
        else{
            ans[2]=1;
        }
    }
    else{
         if(n%3==0){
            ans[2]=0;
        }
        else{
            ans[2]=1;
        }
    }


    if(n%2==0){
        if(n%6==0){
            ans[3]=0;
        }
        else{
            ans[3]=1;
        }
    }
    else{
         if(n%5==0){
            ans[3]=0;
        }
        else{
            ans[3]=1;
        }
    }


    if(n>10){
        ans[4]=0;
    }
    else{
        ans[4]=1;
    }


    if(n>100){
        ans[5]=0;
    }
    else{
        ans[5]=1;
    }

    
    if(n>1000){
        ans[6]=0;
    }
    else{
        ans[6]=1;
    }


    if(n>10000){
        ans[7]=0;
    }
    else{
        ans[7]=1;
    }

    for(i;i<8;i++){
        printf("%d",ans[i]);
    }
    
    return 0;
}