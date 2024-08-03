#include<stdio.h>
void main()
{
	unsigned int num;
	int i,pos,n;
	printf("Enter the number:");
	scanf("%x",&num);

	printf("Before:");
	for(pos=15;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");

	for(i=0;i<4;i++)
	{
		num=num|(1<<i);
		num=num&~(1<<(i+4));
		num=num^1<<(i+8);
	}

	printf("After:");
	for(pos=15;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
}
