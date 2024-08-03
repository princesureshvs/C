#include<stdio.h>

void main()
{
	int i,j;
	char ch;
	for(i=0;i<5;i++)
	{
		for(j=0,ch='A';j<=i;j++,ch++)
		{
			if(j%2)
				printf("*");
			else
				printf("%c",ch);
		}
		printf("\n");
	}
}
