#include<stdio.h>
int main(){
    int n[100],i,j=0,k;
    int max,count=0;
    while(i!=0){
        scanf("%d",&i);
        n[j]=i;
        j++;
    }
    max=n[0];
    for(k=0;k<j;k++){
        if(max<n[k]){
            max=n[k];
        }
    }
    for(k=0;k<j-1;k++){
        if(n[k]%max==0){
            count+=1;
        }
    }
    printf("%d %d",max,count);
}