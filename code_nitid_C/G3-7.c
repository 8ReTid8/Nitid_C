#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    c=a*a+b*b;
    printf("%.6f",sqrt(c));
    return 0;
}