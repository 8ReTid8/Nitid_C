#include<stdio.h>
#include<math.h>
int main(){
    int n,a1,a0,i;
    scanf("%d %d %d",&n,&a0,&a1);
    int a[n+1];
    a[0] = a0;
    a[1] = a1;
    for(i=2;i<=n;i++){
        a[i]=pow(i,2)*a[i-1]-a[i-2]+pow(3,i);
    }
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
}