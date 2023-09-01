#include <stdio.h>
int main(){
    int n=1,ans[100],i=0;
    while(n>=0){
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        ans[i]=100-n;
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%d\n",ans[j]);
    }
    return 0;
}