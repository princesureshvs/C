#include<stdio.h>
void main()
{
	char s[20];
	int i,count=0;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
			count++;
	}
	printf("Word count= %d",count);
}
