#include<stdio.h>
struct U
{
	char ch;
	int i;
}v={257,2};
void main()
{
	/*	union U u1;
		u1.i=258;
		printf("u1.ch=%d\n",u1.ch);
		u1.ch='a';

		printf("u1.i=%d u1.ch=%d\n",u1.i,u1.ch);*/
	printf("%d\n",v.i);
	printf("%d\n",v.ch);
}
