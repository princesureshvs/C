#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,k,l,c;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	printf("Enter the character to delete:");
	scanf(" %c",&ch);
	//logic
	for(l=0;s[l];l++);	

	for(i=0,c=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(k=i;k<l;k++)
				s[k]=s[k+1];
			l--;
			i--;
			c++;
			if(c==2)
				break;
		}
	}
	printf("string:%s\n ",s);
}
