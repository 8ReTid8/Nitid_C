#include<stdio.h>
int main(){
    int y;
    float g;
    char w;
    scanf("%d %f %c",&y,&g,&w);
    if(g>=3.00){
        printf("approved");
    }
    else if(y>=2){
        if(g>=2.50){
            if(w=='Y'){
                printf("approved");
            }
            else{
                printf("not approved\n");
                printf("no help");
            }
        }
        else{
            printf("not approved\n");
            printf("grade < 2.50");
        }
    }
    else{
        printf("not approved\n");
        printf("year < 2");
    }
    return 0;
}