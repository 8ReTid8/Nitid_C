#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    c=b/a;
    printf("%.0f",ceil(c));
}