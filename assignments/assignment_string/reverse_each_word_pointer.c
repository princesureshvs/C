#include<stdio.h>
void rev_fn(char *s,char *p,char *q)
{
	char temp;
	for(;p<q;p++,q--)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
}

void main()
{
	char s[30];
	int i,j,l;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	for(l=0;s[l];l++);

	char *p=s,*q=s,*m,*n;
	m=s;
	for(i=0;i<=l;i++)
	{
		*p++;
		if( *p==' ' || *p== '\0')
		{
			n=p-1;
			rev_fn(s,m,n);
			m=p+1;

		}
	}
	printf("%s",s);        
} 
