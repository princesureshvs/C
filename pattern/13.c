#include<stdio.h>
void main()
{
	int i,j,num;

	for(i=0;i<5;i++)
	{
		for(j=0,num=1+i;j<=i;j++,num=num+5-j)
		{
			printf("%d ",num);
		}
		printf("\n");
	}
}
