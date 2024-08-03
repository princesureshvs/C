#include<stdio.h>
void main()
{
	int i,j,num;

	for(i=0;i<4;i++)
	{
		for(j=0,num=i*2+1;j<i*2+1;j++)
			printf("%d",num--);
		printf("\n");
	}
}
