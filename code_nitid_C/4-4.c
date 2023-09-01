#include <stdio.h>
#include <stdlib.h>
int main(){
    int m,f,h;
    printf("mid-term : ");
    scanf("%d",&m);
    printf("final : ");
    scanf("%d",&f);
    printf("homework : ");
    scanf("%d",&h);
    int x;
    x=(m*0.4)+(f*0.5)+(h*0.1);
    printf("your grade : ");
    if(90<=x && x<=100){
        printf("A");
    }
    else if(85<=x && x<=90){
        printf("B+");
    }
    else if(80<=x && x<=85){
        printf("B");
    }
    else if(70<=x && x<=80){
        printf("C+");
    }
    else if(60<=x && x<=70){
        printf("C");
    }
    else if(55<=x && x<=60){
        printf("D+");
    }
    else if(50<=x && x<=55){
        printf("D");
    }
    else if(x<50){
        printf("F");
    }
    return 0;
}