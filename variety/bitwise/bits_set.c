#include<stdio.h>
void main()
{
	int num,pos=31,c=0,L1;
	printf("Enter the number:");
	scanf("%d",&num);

L1:
	if(num>>pos&1)
		c++;
	pos--;
	if(pos>=0)
		goto L1;
	printf("set bits=%d\n",c);
}
