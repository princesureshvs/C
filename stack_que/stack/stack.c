#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack_arr[size];
int top=-1;
void push();
void pop();
void display();

void main()
{
	int op;
	while(1)
	{
		printf("Enter the options:\n");
		printf("1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);
		}
	}
}


void push()
{
	if(top>=size-1)
	{
		printf("stack overflow\n");
		return;
	}
	top++;
	printf("Enter the number:");
	scanf("%d",&stack_arr[top]);
}

void pop()
{
	if(top<=-1)
	{
		printf("stack underflow:\n");
		return;
	}
	printf("deleted data %d",stack_arr[top]);
	top--;
}

void display()
{
	if(top<=-1)
	{
		printf("stack empty:\n");
		return;
	}
	int i;
	for(i=0;i<=top;i++)
		printf("%d ",stack_arr[i]);
}

