#include <stdio.h>
#include <math.h>
int c;
float a;
float rec(int w,int h);
float cir(float r);
void main(){
    int w,h;
    float r;
    printf("============MENU============\n");
    printf("1.calculate area of rectangle\n");
    printf("2.calculate area of circle\n");
    printf("please enter 1or2: ");
    scanf("%d",&c);
    if(c==1){
        printf("please enter width: ");
        scanf("%d",&w);
        printf("please enter height: ");
        scanf("%d",&h);
        printf("area = %.2f",rec(w,h));
    }
    if(c==2){
        printf("please enter radius: ");
        scanf("%f",&r);
        printf("area = %.2f",cir(r));
    }
}
float rec(int w,int h){
    a = w*h;
    return a;
}
float cir(float r){
    a = M_PI*(r*r);
    return a;
}