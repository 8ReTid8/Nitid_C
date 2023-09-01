#include <stdio.h>
int n;

typedef struct
{
    char face ;
    int numface;
    char suit;
}deck;

int main(){
    int i,j;
    int sum=0 ;
    deck temp;
    scanf("%d",&n);
    deck a[n];
    for(i=0;i<n;i++){
        scanf(" %c %c",&a[i].face,&a[i].suit);
    }
    for(i=0;i<n;i++){
        if(a[i].face=='A'){
            a[i].numface = 1;
        }
        else if(a[i].face =='J'){
            a[i].numface = 10;
        }
        else if(a[i].face =='Q'){
            a[i].numface = 11;
        }
        else if(a[i].face =='K'){
            a[i].numface = 12;
        }
        else{
            a[i].numface = a[i].face-'0';
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i].numface>a[j].numface){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%c-%c",a[i].face,a[i].suit);
        if(i<n-1){
            printf(",");
        }
        sum += a[i].numface;
    }
    printf("\n%d",sum);
    return 0;
}