#include<stdio.h>
union U
{
	char ch;
	int i;
};

void main()
{
	union U u1;
	u1.ch=10;
	if(u1.ch==10)
		printf("Little\n");
	else
		printf("Big...\n");
}
