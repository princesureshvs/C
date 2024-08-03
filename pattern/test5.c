#include<stdio.h>
void main()
{
	int i,j,n;

	for(i=0;i<3;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j%2)
				printf("%d",j);
		}
		printf("\n");
	}
}
