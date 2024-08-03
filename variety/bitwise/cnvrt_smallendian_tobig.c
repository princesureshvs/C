#include<stdio.h>
void main()
{
	unsigned int num;
	int n1,n2,n3,n4;
	printf("Enter the number:");
	scanf("%x",&num);
	printf("%x\n",num);

	n1 =num&0xff000000;
	n2=num&0x00ff0000;
	n3=num&0x0000ff00;
	n4=num&0x000000ff;

	num=n1>>24|n2>>8|n3<<8|n4<<24;

	printf("%x\n",num);
}
