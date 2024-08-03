#include<stdio.h>
void main()
{
	int num,i,j,m,n,pos;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Binary before:");
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");

	for(i=0,j=31;i<6;i++,j--)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}

	printf("Binary After shifting:");
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
}
