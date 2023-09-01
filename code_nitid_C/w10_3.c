#include <stdio.h>
#include <string.h>
void main(){
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
        switch(a[i]){
            case 48:
            printf("zero");
            break;
            case 49:
            printf("one");
            break;
            case 50:
            printf("two");
            break;
            case 51:
            printf("three");
            break;
            case 52:
            printf("four");
            break;
            case 53:
            printf("five");
            break;
            case 54:
            printf("six");
            break;
            case 55:
            printf("seven");
            break;
            case 56:
            printf("eight");
            break;
            case 57:
            printf("nine");
            break;
            default:
            printf("%c",a[i]);
        }
    }
}