#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,a=0;
    scanf("%d %d",&n,&i);
    for(j=0;j<i+1;j++){
        a+=pow(n,j);
    }
    printf("%d",a);
}