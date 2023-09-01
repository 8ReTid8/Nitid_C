#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1,num2,ans;
    char op;
    printf("pls enter number 1 = ");
    scanf("%d",&num1);
    printf("pls enter number 2 = ");
    scanf("%d",&num2);
    fflush(stdin);
    printf("enter operator = ");
    scanf("%c",&op);
    if(op=='+'){
        ans=num1+num2;
    }
    if(op=='-'){
        ans=num1-num2;
    }
    if(op=='*'){
        ans=num1*num2;
    }
    if(op=='/'){
        ans=num1/num2;
    }
    printf("result = %d",ans);
    return 0;
}