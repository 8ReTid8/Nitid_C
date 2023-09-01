#include <stdio.h>
#include <stdlib.h>
int main(){
    int A,B,C,m,Y;
    printf("pls enter number A : ");
    scanf("%d",&A);
    printf("pls enter number B : ");
    scanf("%d",&B);
    printf("pls enter number C : ");
    scanf("%d",&C);
    printf("pls enter number m : ");
    scanf("%d",&m);
    if(m>7){
        Y=A*(m*m)+B*m+C;
    }
    if(m==7){
        Y=A*(m*m)-B*m-C;
    }
    if(m<7){
        Y=A*(m*m)+B*m;
    }
    printf("result Y = %d",Y);
    return 0;
}