#include<stdio.h>
void main()
{
	char s[20];
	int i,j,l;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	//logic 
	for(l=0;s[l];l++);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i] != s[j])
		{
			printf("Not a palindrome\n");
			return;
		}
	}
	printf("Palindrome\n");
}
