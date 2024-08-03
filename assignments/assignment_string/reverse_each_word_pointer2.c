#include<stdio.h>
void main()
{
	char s[30];
	int i,l;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	for(l=0;s[l];l++);
	char *p=s,*q=s;
	for(i=0;i<10;i++)
	{
		p++;
		if(*p==' ' || *p=='\0')
		{
			p--;
			*p=*p^32;
			*q=*q^32;
			p=p+2;
			q=p;
		}

	}
	printf("%s",s);        
} 
