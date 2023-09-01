#include <stdio.h>
int main(void)
{
	int temp=0;
	int i,j;
	char b[100];
	int num[100];
	int a;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<a;i++)
	{ 
		temp=num[i];
		if(temp == 1 ||temp == 0)
		{
			b[i] = 'n';
		}
		else
		{
			for(j=2;j<num[i]/2;j++)
			{
				if(temp%j == 0)
				{
					b[i] = 'n';
				}
			}
			if(b[i] != 'n')
			{
				b[i] = 'y';
			}
		}
	}
	for(i=0;i<a;++i)
	{
		printf("%c\n",b[i]);
	}
	return 0;
}