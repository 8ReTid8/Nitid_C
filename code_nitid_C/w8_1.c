#include <stdio.h>
float p=10000;
float cal(int n){
    if(n==0){
        return p;
    }
    else{
        return 1.05* cal(n-1);
    }
}
void main(){
    printf("%f",cal(30));
}
