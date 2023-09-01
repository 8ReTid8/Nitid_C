#include <stdio.h>
float p=25000000;
float cal(int n){
    p=p-(0.1*p);
    if(n==2580){
        return p;
    }
    else{
        return cal(n+1);
    }
}
void main(){
    printf("%f",cal(2558));
}