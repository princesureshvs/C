#include<stdio.h>
void main()
{
	int i,j,k,num;
	char ch='E';
	for(i=0;i<5;i++,ch='E')
	{
		for(k=0;k<4-i;k++)
			printf(" ");
		for(j=0,num=1,ch=ch-i;j<=i;j++)
		{
			if(i%2==1)
				printf("%d",num++);
			else
				printf("%c",ch++);
		}
		printf("\n");
	}
}
