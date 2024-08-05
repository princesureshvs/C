#include<stdio.h>
#include<stdlib.h>
#define size 20
char stack_arr[size];
int top=-1;

void push(char *);
void pop();

void main()
{
	int i;
	char string[20];
	printf("Enter the string:");
	scanf("%s",string);

	for(i=0;string[i];i++)
		push(&string[i]);

	for(i=0;string[i];i++)
		pop();
	printf("\n");
}

void push(char *s)
{
	if(top>=size-1)
	{
		printf("stack overflow :\n");
		return;
	}
	top++;
	stack_arr[top]=*s;
}

void pop()
{
	if(top<=-1)
	{
		printf("stack underflow:\n");
		return;
	}
	printf("%c",stack_arr[top]);
	top--;
}
