#include <stdio.h>
int main()
{
	int i=0;
	int j=0,temp=0;
	int n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
		
	}
	return 0;
}