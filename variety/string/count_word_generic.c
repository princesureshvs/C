#include<stdio.h>
int count_word(char *);
void main()
{
	char s[100];
	int c;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	c=count_word(s);
	printf("count=%d\n",c);
}

int count_word(char *s)
{
	int l,flag=0,c=0;
	for(l=0;s[l];l++);
	char *p=s,*q=s+(l-1);

	while(*p)
	{
		if(flag==0)
		{
			if(s[0]==' ')
			{
				while(*p != ' ')
					p++;
				flag=1;
			}
		}
		while(p != q)
		{

			if(*p==' ' && *(p+1)==' ')
				p++;

			else if(*p==' ' && *(p+1)!= ' ')
			{
				c++;
				p++;
			}
			else
				p++;
		}
		p++;
	}
	if(flag==1)
		return c;
	else
		return c+1;
}
