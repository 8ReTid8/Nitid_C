#include<stdio.h>
int main(){
    int n=1,ans[100],i=0,a=0;
    while(n>=0){
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        ans[i]=n;
        i++;
    }
    for(int j=0;j<i;j++){
        for(int k=0;k<ans[j];k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
}