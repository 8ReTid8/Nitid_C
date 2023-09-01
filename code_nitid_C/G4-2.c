#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,k;
	int num;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num*2-1;j++)
		{
			if(i>1 && j==num)
			{
				printf(" ");
			}
			else if(j==num || j==num-(i-1) || j==num+(i-1))
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=num-1;i>=1;i--)
	{
		for(j=1;j<=num*2-1;j++)
		{
			if(i>1 && j==num)
			{
				printf(" ");
			}
			else if(j==num || j==num-(i-1) || j==num+(i-1))
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}