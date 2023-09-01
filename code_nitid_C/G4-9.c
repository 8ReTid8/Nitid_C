#include <stdio.h>
int main()
{
	int max = 0;
	char b[1000];
	int flag=1;
	int l=0;
	int k=0;
	int c[1000];
	int temp=0;
	int j =0;
	int i = 0;
	int x = 0;
	int a[100];
	while( x==0)
	{
		scanf("%d",&a[i]);
		if(a[i]!= 0)
		{
			i = i+1;
			continue;
		}
		else{
			break;
		}
	}
	for(j=0;j<i;j++)
	{
		flag = 1;
		for(k=2;k<=a[j]/2;k++)
		{
			if(a[j] % k==0)
			{
				flag = 0;
				break;
			}
		}
		if(a[j] <= 1)
			flag = 0;
		else if(flag==1)
		{
			if(j==0)
			{
				max = a[j];
			}
			else if(a[j] >= max)
			{
				max = a[j];
			}
		}
	}
	if(max !=0)
		printf("%d",max);
	else
		printf("%d",-1);
}