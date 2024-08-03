#include<stdio.h>
void main()
{
	char s[20];
	int i=0,c=0;
	printf("Enter the string:");
	scanf("%[^\n]",s);
	//logic

	while(s[i])
	{
		if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			c++;
		i++;
	}
	printf("vowels count= %d\n",c);
}
