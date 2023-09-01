#include <stdio.h>
#include <string.h>
void main(){
    int i;
    char a[100],temp;
    scanf("%s",a);
    for(i=0;i<strlen(a)/2;i++){
        temp = a[i];
        a[i] = a[strlen(a)-i-1];
        a[strlen(a)-i-1] = temp;
    }
    printf("%s",a);
}