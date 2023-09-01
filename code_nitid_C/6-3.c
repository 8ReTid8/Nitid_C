#include <stdio.h>
#include <stdlib.h>

int main(){
    char id[13];
    int i,j=13;
    int ans=0,check;
    printf("please enter id : ");
    scanf("%s",id);
    for(i=0;i<12;i++){
        ans += (id[i]-'0')*j;
        j--;
    }
    ans = ans%11;
    check = (11-ans)%10;
    printf("your ID is ");
    if(check==(id[12]-'0')){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}