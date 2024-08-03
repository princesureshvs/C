#include<stdio.h>
void main()
{
	int num=1,L,i=3;

L:
	printf("%d",num);
	i--;
	if(i>0)
		goto L;
}
