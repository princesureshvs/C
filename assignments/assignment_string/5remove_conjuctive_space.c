#include<stdio.h>
void main()
{
	char s[20];
	int i,l,k;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	//logic
	for(l=0;s[l];l++);
	for(i=0;i<l-1;i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			for(k=i;k<l;k++)
				s[k]=s[k+1];
			i--;
			l--;
		}
	}
	printf("string:%s\n",s);
}
