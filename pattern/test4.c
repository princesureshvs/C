#include<stdio.h>
void main()
{
	int i,j,k;

	for(i=0;i<4;i++)
	{
		for(k=0;k<3-i;k++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("* ");
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(k=0;k<=i;k++)
			printf(" ");
		for(j=0;j<3-i;j++)
			printf("* ");
		printf("\n");
	}
}
