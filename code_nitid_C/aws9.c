#include<stdio.h>
int main(){
    int o=1,m,n,i,j,k=0,l;
    int r[100],c[100];
    while(o>=0){
        scanf("%d %d",&m,&n);
        if((m==0)&&(n==0)){
            break;
        }
        r[k]=m;
        c[k]=n;
        k++;
    }
    for(l=0;l<k;l++){
        for(i=0;i<r[l];i++){
            for(j=0;j<c[l];j++){
                printf("* ");
                }
            printf("\n");
        }
        printf("\n");
    } 
    return 0;
}