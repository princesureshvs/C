#include<stdio.h>
void main()
{
	unsigned int pos,bit,n1,n2,num;
	int i;
	printf("Enter the number:"); 
	scanf("%d",&num);
	printf("Enter the position:");
	scanf("%d",&pos);
	printf("Enter the bit:");
	scanf("%d",&bit);
	printf("Before deleting:");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");

	//logic
	n1=num<<(32-pos);
	n1=n1>>(32-pos);
	n2=num>>(pos+bit);
	n2=n2<<pos;
	num=n1|n2;

	printf("After deleting:");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
}
