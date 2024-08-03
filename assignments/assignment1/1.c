#include<stdio.h>
void main()
{
	unsigned short int num,n1;
	int pos,i,j,m,n;
	printf("Enter the number:");
	scanf("%hd",&num);
	printf("Its binary:");

	for(pos=15;pos>=0;pos--)
		printf("%hd",num>>pos&1);
	printf("\n");

	for(i=0,j=15;i<4;i++,j--)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}

	printf("After swap:");
	for(pos=15;pos>=0;pos--)
		printf("%hd",num>>pos&1);
	printf("\n");
}
