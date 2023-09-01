#include <stdio.h>
#include <stdlib.h>
int main(){
    int A,B,a,b;
    int M,N;
    int ans1,ans2;
    scanf("%d %d",&A,&B);
    scanf("%d %d",&M,&N);
    if(((A==0)&&(M>0))||((B==0)&&(N>0))){
        printf("Unable to finish order");
        return 0;
    }
    else{
        a=A*6;
        b=B*10;
        if((A==0)&&(M==0)){
            if((N%b)>0){
                ans2=(N/b)+1;
            }
            if((N%b)==0){
                ans2=N/b;
            }
            printf("%d",ans2);
        }

        if((B==0)&&(N==0)){
            if((M%a)>0){
                ans1=(M/a)+1;
            }
            if((M%a)==0){
                ans1=M/a;
            }
             printf("%d",ans1);
        }
        else{
            if((N%b)>0){
                ans2=(N/b)+1;
            }
            if((N%b)==0){
                ans2=N/b;
            }
            if((M%a)>0){
                ans1=(M/a)+1;
            }
            if((M%a)==0){
                ans1=M/a;
            }
            if(ans1>=ans2){
                printf("%d",ans1);
            }
            else{
                printf("%d",ans2);
            }
        }          
    }
    return 0;
}