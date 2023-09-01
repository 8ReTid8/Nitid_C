#include <stdio.h>
int main(void)
{
	int i,j,k;
	int limit,limit2;
	scanf("%d",&limit);
	limit2=limit;
	if(limit%2==0)
	{
		for(i=1;i<limit;i+=2)
		{
			for(j=1;j<=i+1;j++)
			{
				printf("*");
			}
			printf("\n");  
		}
		for(i=limit-2;i>=1;i-=2)
		{
			for(int j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if(limit%2!=0)
	{
		for(i=1;i<limit+1;i+=2)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");  
		}
		for(i=limit-2;i>=1;i-=2)
		{
			for(int j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}