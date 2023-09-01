#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int l;
	int num;
	scanf("%d",&num);
	for(int i = 1; i<=num;i++)
	{
		if(i>1)
		{
			for(int k =0;k<=num-1;k++)
			{
				if(i+k > num)
				{
					for(l=1;l< i;l++)
					{
						printf("%d ",l);
					}
					if(l>=i)
						break;
				}
				else{
					printf("%d ",i+k);
				}
			}
		}
		else
		{
			for(int j =1;j<=num;j++)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	return 0;
}