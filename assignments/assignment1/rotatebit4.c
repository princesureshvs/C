#include<stdio.h>
void main()
{
	unsigned short int num,n1,n2;
	int pos,bit;

	printf("Enter the number:");
	scanf("%hd",&num);
	printf("Enter the bit:");
	scanf("%d",&bit);
	printf("\n");

	printf("Its binary:");
	for(pos=15;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");

	//n1=num&7;
	n1=num<<(16-bit);
	n2=num>>bit;
	num=n1|n2;

	printf("After rotate:");
	for(pos=15;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
}
