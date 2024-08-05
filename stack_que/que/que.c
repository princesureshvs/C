#include<stdio.h>
#include<stdlib.h>
#define size 5
int que_arr[size];
int top=-1;

void enque();
void deque();
void display();

void main()
{
	int op;
	while(1)
	{
		printf("Ente the options:\n");
		printf("1)enque 2)deque 3)display 4)exit");
		scanf("%d",&op);
		switch(op)
		{
			case 1:enque();break;
			case 2:deque();break;
			case 3:display();break;
			case 4:exit(0);
		}
	}
}

void enque()
{
	if(top>=size-1)
	{
		printf("Que overflow:\n");
		return;
	}
	top++;
	printf("Enter the value:\n");
	scanf("%d",&que_arr[top]);
}

void deque()
{
	if(top<=-1)
	{
		printf("que underflow");
		return;
	}
	int i;
	printf("deleted number=%d ",que_arr[0]);
	for(i=0;i<top;i++)
		que_arr[i]=que_arr[i+1];
	top--;
}

void display()
{
	if(top<=-1)
	{
		printf("que is empty:\n");
		return;
	}
	int i;
	for(i=0;i<=top;i++)
		printf("%d ",que_arr[i]);
}
