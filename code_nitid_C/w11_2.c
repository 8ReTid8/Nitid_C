#include <stdio.h>
#include <math.h>
typedef struct
{
    float X;
    float Y;
    float Z;
}vector3D;

float Findlength(vector3D vector){
    float l;
    l=sqrt(pow(vector.X,2)+pow(vector.Y,2)+pow(vector.Z,2));
    return l;
}

int main(){
    int n,i;
    scanf("%d",&n);
    vector3D v;
    for(i=0;i<n;i++){
        scanf("%f %f %f",&v.X,&v.Y,&v.Z);
        printf("%.2f\n",Findlength(v));
    }
    return 0;
}