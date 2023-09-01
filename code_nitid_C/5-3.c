#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n=0,a,k;
    int sum=0,num;
    for(i=1;i<=7;i++){
        scanf("%d",&a);
        n=n+a;
    }
    if(n<=100){
        num=n*80;
    }
    if(n>100 && n<=250){
        k=n-100;
        num=8000+(k*70);
    }
    if(n>250){
        k=n-250;
        num=10500+(k*60);
    }
    sum=sum+num;
    printf("%d\n%d\n%d\n",sum,n*100,n*100-sum);
}
