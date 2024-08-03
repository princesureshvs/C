#include<stdio.h>

void main()
{
	int i,j,n;
	char ch;
	for(i=0;i<5;i++)
	{
		for(j=0,ch='A',n=1;j<5-i;j++)
		{
			if(j%2==1)
				printf("%d",n++);
			else
				printf("%c",ch++);


		}
		printf("\n");
	}
}
