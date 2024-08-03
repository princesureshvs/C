#include<stdio.h>
void rev_fn(char *s,int m,int n)
{
	char temp,flag=0;
	for(;m<n;m++,n--)
	{
		if(flag==0)
		{
			s[n]=32^s[n];
			flag=1;
		}
		temp=s[m];
		s[m]=s[n];
		s[n]=temp;
	}
}

void main()
{
	char s[30];
	int i,j,m,n,l,t;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	for(l=0;s[l];l++);

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
