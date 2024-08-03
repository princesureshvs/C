#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;

	for(i=0;i<5;i++)
	{
		for(k=0;k<i;k++)
			printf("*");
		for(j=0,ch='E'-i;j<5-i;j++,ch--)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
