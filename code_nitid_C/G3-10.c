#include<stdio.h>
int main(){
    int n[3],i,min,max,mid;
    char c[4];
    for(i=0;i<3;i++){
        scanf("%d",&n[i]);
    }
    max=n[0];
    for(i=0;i<3;i++){
        if(max<n[i]){
            max=n[i];
        }
    }
    min=n[0];
    for(i=0;i<3;i++){
        if(min>n[i]){
            min=n[i];
        }
    }
    for(i=0;i<3;i++){
        if(min<n[i]&&n[i]<max){
            mid=n[i];
        }
    }
    n[0]=min;
    n[1]=mid;
    n[2]=max;
    scanf("%s",&c);
    for(i=0;i<3;i++){
        printf("%d ",n[(c[i]-'A')]);
    }
    return 0;
}