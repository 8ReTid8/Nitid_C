#include <stdio.h>
#include <stdlib.h>
int main(){
    float n,i,dis,time;
    float c,ans=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        scanf("%f %f",&dis,&time);
        c=dis*(time/60);
        ans=ans+c;
    }
    printf("%.1f",ans);
}