#include <stdio.h>
int a[100];
int i,n;
int minArray(int a[]);
int maxArray(int a[]);
int sumArray(int a[]);
int max,min,sum;
void main(){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("min = %d\n",minArray(a));
    printf("max = %d\n",maxArray(a));
    printf("sum = %d\n",sumArray(a));
}

int minArray(int a[]){
    min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}

int maxArray(int a[]){
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    return max;
}

int sumArray(int a[]){
    int sum=0;
    for(i=0;i<n;i++){
        sum += a[i]; 
    }
    return sum;
}