i#include<stdio.h>
void rev_fn(char *s,int m,int n)
{
	char temp;
	for(;m<n;m++,n--)
	{
		temp=s[m];
		s[m]=s[n];
		s[n]=temp;
	}
}

void main()
{
	char s[30],t;
	int i,j,m,n,l;

	printf("Enter the string:");
	scanf("%[^\n]",s);
	for(l=0;s[l];l++);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}

	for(m=i=0;i<=l;i++)
	{
		if(s[i]==' ' || s[i]=='\0')
		{
			n=i-1;
			rev_fn(s,m,n);
			m=i+1;
		}
	}
	printf("string=%s\n",s);
}
