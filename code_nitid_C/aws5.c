#include<stdio.h>
int main(){
    char a[3];
    int i;
    scanf("%s",&a);
    for(i=0;i<3;i++){
        if((a[i]-'0')==0){
            printf("Zero ");
        }
        else if((a[i]-'0')==1){
            printf("One ");
        }
        else if((a[i]-'0')==2){
            printf("Two ");
        }
        else if((a[i]-'0')==3){
            printf("Three ");
        }
        else if((a[i]-'0')==4){
            printf("Four ");
        }
        else if((a[i]-'0')==5){
            printf("Five ");
        }
        else if((a[i]-'0')==6){
            printf("Six ");
        }
        else if((a[i]-'0')==7){
            printf("Seven ");
        }
        else if((a[i]-'0')==8){
            printf("Eight ");
        }
        else if((a[i]-'0')==9){
            printf("Nine ");
        }
    }
    return 0;
}