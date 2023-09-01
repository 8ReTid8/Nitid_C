#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,c,ans=0,l=1;
    char YN;
    while(l>0){
        printf("welcome to vending machine. enter 1-sandwich,2-cake,3-beverage : ");
        scanf("%d",&n);
        if(n==1){
            printf("enter 1-tuna (30),2-hamburger (40),3-ham (35) : ");
            scanf("%d",&c);
            if(c==1){
                ans=ans+30;
            }
            if(c==2){
                ans=ans+40;
            }
            if(c==3){
                ans=ans+35;
            }
        }
        if(n==2){
            printf("enter 1-donut (17),2-jamroll (15),3-pastry (25) : ");
            scanf("%d",&c);
            if(c==1){
                ans=ans+17;
            }
            if(c==2){
                ans=ans+15;
            }
            if(c==3){
                ans=ans+25;
                }
        }
        if(n==3){
            printf("enter 1-coke (15),2-est (15),3-greentea (60) : ");
            scanf("%d",&c);
            if(c==1){
                ans=ans+15;
            }
            if(c==2){
                ans=ans+15;
            }
            if(c==3){
                ans=ans+60;
            }
        }
        fflush(stdin);
        printf("do you want to continue : ");
        scanf("%c",&YN);
        if(YN=='Y'){
            l=1;
        }
        else{
            l=-1;
        }
    }
    printf("THANK YOU VERY MUCH. THE PRICE IS : %d BATH",ans);
}