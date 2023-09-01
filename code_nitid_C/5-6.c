#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int m=0;
	int d=0;
	int total =0;
	char b[20];
	int a;
	scanf("%s",b);
	for(int i=0;i<=strlen(b);i++)
	{
		switch (b[i])
		{
			case 48:
				m =0;
				break;
			case 49:
				m =1;
				break;
			case 50:
				m =2;
				break;
			case 51:
				m =3;
				break;
			case 52:
				m =4;
				break;
			case 53:
				m =5;
				break;
			case 54:
				m =6;
				break;
			case 55:
				m =7;
				break;
			case 56:
				m =8;
				break;
			case 57:
				m =9;
				break;	
		}
		switch (i)
		{
			case 0:
				total =total+ m*10;
				break;
			case 1:
				total =total+ m*9;
				break;
			case 2:
				total =total+ m*8;
				break;
			case 3:
				total =total+ m*7;
				break;
			case 4:
				total =total+ m*6;
				break;
			case 5:
				total =total+ m*5;
				break;
			case 6:
				total =total+ m*4;
				break;
			case 7:
				total =total+ m*3;
				break;
			case 8:
				total =total+ m*2;
				break;
			case 9:
				total =total+ m*1;
				break;
		}
	}
	if(total%11 == 0)
		printf("valid");
	else
		printf("invalid");
}