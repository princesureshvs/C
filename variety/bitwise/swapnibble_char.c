#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the char:");
	scanf("%c",&ch);
	//swapping
	ch=ch<<4|ch>>4;
	printf("%c",ch);
}
