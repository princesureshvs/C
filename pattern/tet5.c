#include<stdio.h>

void main()
{
	int i,j;
	char ch;
	for(i=0;i<3;i++)
	{
		for(j=0,ch='A';j<=i;j++)
		{
			if(i%2==1)
				printf("%c",ch++);
			else
				printf("%d",j+1);
		}
		printf("\n");
	}
}
