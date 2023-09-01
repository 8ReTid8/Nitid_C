#include <stdio.h>
#include <math.h>
int main(){
    int n,i;
    float sd=0,sum=0;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum += a[i];
    }
    for(i=0;i<n;i++){
        sd += pow(a[i]-(sum/n),2);
    }
    sd = sqrt(sd/n);
    printf("%.2f",sd);
} 