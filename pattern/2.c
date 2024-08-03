#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=0;i<5;i++)
	{
		for(j=0,n=2;j<=i;j++,n=n+2)
			printf("%d",n);
		printf("\n");
	}
}
