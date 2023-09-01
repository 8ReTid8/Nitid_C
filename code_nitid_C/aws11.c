#include <stdio.h>
int main()
{
	int r,c;
	scanf("%d %d",&r,&c);
	int i,j,arr[r][c],total[r+1],tal[c+1],tol;
	for(i=0;i<r;i++)
	{
		total[i] = 0;
		for(j=0;j<c;j++)
		{
			if(i==0 && j==0)
				total[0] = 0;
			scanf("%d",&arr[i][j]);
			total[i] = total[i] + arr[i][j];
		}
		tol = tol+total[i];
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("%d",total[i]);
		printf("\n");
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			if(j==0)
				tal[i] = 0;
			tal[i] = tal[i] + arr[j][i];
		}
		printf("%d ",tal[i]);
	}
	printf("%d",tol);
	return 0;
}

