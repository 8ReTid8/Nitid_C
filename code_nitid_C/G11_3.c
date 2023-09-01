// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n,i,j;
    scanf("%d",&n);
    
    int savedata[n];

    for(i=0;i<n;i++)
    {
        int k;
        scanf("%d\n",&k);

        int data[k];
        for(j=0;j<k;j++){
            scanf("%d",&data[j]);
        }

        int maxf = data[k-1];
        int amount = 1;
        for(j=k-1;j>=0;j--){
            
            // printf("%d ,max = %d\n",data[j],maxf);
            
            if (data[j] > maxf){
                // printf("%d",data[j]);
                maxf = data[j];
                amount++;
            }   
        }
        savedata[i] = amount;
        // printf("%d",amount);


        //print data
        // for(j=0;j<k;j++){
        //     printf("%d ",data[j]);
        // }


    }
    for(i=0;i<n;i++){
             printf("%d\n",savedata[i]);
         }
    


    return 0;
}