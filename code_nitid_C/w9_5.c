#include <stdio.h>
#define NMAX 10
int i;
int j;
void inputArray(int array[],int N){
    for(i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
}
void showArray2D(int matrix[][10],int N){
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    } 
}
void constructMatrix(int P[][10],int N,int A[],int B[]){
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            P[i][j]=A[i]*B[j];
        }
    } 
}

int main(){ 
    int a[NMAX],b[NMAX],p[NMAX][NMAX],n;
    printf("Enter N = "); 
    scanf("%d",&n);
    printf("Input array A : \n"); inputArray(a,n);
    printf("Input array B : \n"); inputArray(b,n);
    constructMatrix(p,n,a,b);
    printf("Matrix P \n");
    showArray2D(p,n);
    return 0;
}