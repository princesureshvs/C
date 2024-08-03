#include<stdio.h>
void main()
{
	int i,j,n;

	for(i=0;i<5;i++)
	{
		for(j=0,n=5;j<=i;j++)
		{
			if(i%2==1)
				printf("*");
			else
				printf("%d",n--);
		}
		printf("\n");
	}
}
