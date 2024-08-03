#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=0;i<6;i++)
	{
		for(j=0,n=1;j<6-i;j++)
		{
			printf("%d",n++);
		}
		printf("\n");
	}
}
