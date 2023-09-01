#include <stdio.h>
#include <math.h>
int main() {
    int i,j,n;
    int max,min;
    float sum=0,sd=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    for(i=0;i<n;i++){
        min = a[0];
        if(a[0]>=a[i]){
            min = a[i];
        }
    }
    for(i=0;i<n;i++){
        max = min;
        if(max<=a[i]){
            max = a[i];
        }
    }
    for(i=0;i<n;i++){
        sd += pow(a[i]-(sum/n),2);
    }
    sd = sqrt(sd/(n-1));
    printf("%f %d %d %f",sum/n,max,min,sd);
}