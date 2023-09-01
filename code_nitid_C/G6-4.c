#include <stdio.h>
#include <math.h>
int main()
{
	float min1,min;
	int num,i,j,min2,min3;
	scanf("%d",&num);
	float a[num],b[num];
	for(i=0;i<num;i++)
	{
		scanf("%f %f",&a[i],&b[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(i==0)
			{
				min1 = pow(a[0]-a[j],2)+pow(b[0]-b[j],2);
				min1 = sqrt(min1);
			}
			else
			{
				min = pow(a[i]-a[j],2)+pow(b[i]-b[j],2);
				min = sqrt(min);
				if(min1 >= min)
				{
					min1 = min;
					min2 = i+1;
					min3 = j+1;
				}
			}
		}
	}
	printf("%d %d %.2f",min2,min3,min1);
}