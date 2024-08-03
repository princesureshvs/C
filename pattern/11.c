#include<stdio.h>

void main()
{
	int i,j,num;

	for(i=0;i<5;i++)
	{
		for(j=0,num=1;j<5;j++,num++)
		{
			if((4-i)==j)
				printf("*");
			else
				printf("%d",num);
		}
		printf("\n");
	}
}
