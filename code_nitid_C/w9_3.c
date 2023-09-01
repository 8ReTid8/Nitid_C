#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_digits(char *s);
int main(void)
{
	char str[100];
	fgets(str,100,stdin);
	char *p = str;
	char *q = str + strlen(str)-1;
	while(p!=q)
	{
		char temp = *q;
		*q = *p;
		*p = temp;
		p++;
		q--;
	}
	int result = count_digits(str);
	printf("%s",str);
	printf("\n");
	printf("%d",result);
	return 0;
}
int count_digits(char *s)
{
	int count = 0;
	int length = strlen(s);
	for(int i=0;i<length;i++)
	{
		if(isdigit(s[i])) count++;
	}
	return count;
}
