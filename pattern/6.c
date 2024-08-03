#include<stdio.h>

void main()
{

	int i,j,num;
	for(i=0;i<6;i++)
	{
		for(j=0,num=1;j<6-i;j++,num=num+2)
		{
			if(i%2==1)
				printf("%d",num);
			else
				printf("*");
		}
		printf("\n");
	}
}
