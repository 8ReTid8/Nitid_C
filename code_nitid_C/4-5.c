#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,ans=1;
    printf("enter number of factorial : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        ans=ans*(i+1);
    }
    printf("result : %d",ans);
    return 0;
}