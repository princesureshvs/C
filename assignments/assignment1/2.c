#include<stdio.h>
void main()
{
	int i,j,pos,m,n;
	unsigned char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	printf("ASCII:%d\n",ch);
	printf("Its binary:");
	for(pos=7;pos>=0;pos--)
		printf("%d",ch>>pos&1);
	printf("\n");

	for(i=0,j=7;i<j;i++,j--)
	{
		m=ch>>i&1;
		n=ch>>j&1;
		if(m!=n)
		{
			ch=ch^1<<i;
			ch=ch^1<<j;
		}
	}

	printf("After swapping:");
	for(pos=7;pos>=0;pos--)
		printf("%d",ch>>pos&1);
	printf("\n");
}
