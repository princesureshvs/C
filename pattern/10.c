#include<stdio.h>
void main()
{
	int i,j,k;
	char ch;

	for(i=0;i<5;i++)
	{
		for(k=0;k<4-i;k++)
			printf(" ");
		for(j=0,ch='A';j<=i;j++)
		{
			if(i%2==1)
				printf("%c",ch++);
			else
				printf("#");
		}
		printf("\n");
	}  
}
