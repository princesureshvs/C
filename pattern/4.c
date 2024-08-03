#include<stdio.h>
void main()
{
	int i,j,n=1,k;

	for(i=0;i<5;i++,n=1)
	{
		for(k=0;k<i;k++)
			printf(" ");
		for(j=0,n=n+2*i;j<5-i;j++,n=n+2)
		{

			printf("%d",n);
		}
		printf("\n");
	}
}
