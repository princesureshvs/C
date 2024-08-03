#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;
        struct student *next;
}SLL;

void add_begin(SLL **ptr);
void print_node(SLL *ptr);
int count_node(SLL *ptr);
void save_file(SLL *ptr);
void reverse_print(SLL *);
void print_rec(SLL *);
void rev_rec(SLL *);
void add_end(SLL **);


int main()
{
	SLL *headptr=0;
	int c,op;
	while(1)
	{
		printf("Enter the options:\n");
		scanf("%d",&op);
	//	printf("1");
		switch(op)
		{
			case 1:add_begin(&headptr);break;
			case 2:add_end(&headptr);break;
			case 4:print_node(headptr);break;
			case 5:c=count_node(headptr);printf("count=%d\n",c);break;
			case 6:save_file(headptr);break;
			case 8:reverse_print(headptr);break;
			case 9:print_rec(headptr);break;
			case 10:rev_rec(headptr);break;
			case 16:exit(0);
			default:printf("Wrong choice selected\n");
		}

	}
}

void add_begin(SLL **ptr)
{
	SLL *new=malloc(sizeof(SLL));
	printf("Enter the rollno name and marks:\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	new->next=*ptr;
	*ptr=new;
}

void print_node(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No data available here\n");
		return;
	}
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}	
}

int count_node(SLL *ptr)
{
	int c=0;
	while(ptr)
	{
		ptr=ptr->next;
		c++;
	}
	return c;
}

void save_file(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No node found\n");
		return;
	}

	FILE *fp=fopen("std.txt","w");
	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	printf("Data have been saved in the file:\n");
}


void reverse_print(SLL *ptr)
{
	int i,j,c=count_node(ptr);
	SLL *temp;
	if(ptr==0)
	{
		printf("No node found\n");
		return;
	}

	for(i=0;i<c;i++)
	{
		temp=ptr;
		for(j=0;j<c-i-1;j++)
			temp=temp->next;
		printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
	}
}

void print_rec(SLL *ptr)
{
	if(ptr)
	{
		printf("%d %s %f",ptr->rollno,ptr->name,ptr->marks);
		if(ptr->next != 0)
			print_rec(ptr->next);
	}
	else
		printf("No records found:\n");
}

void rev_rec(SLL *ptr)
{
	if(ptr)
	{
		if(ptr->next != 0)
			rev_rec(ptr=ptr->next);
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	}
	else
		printf("No records found\n");
}

void add_end(SLL **ptr)
{
	SLL *new=malloc(sizeof(SLL));
	SLL *last;
	printf("Enter the rollno name and marks:\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(*ptr==0)
		*ptr=new;
	else
	{
		last=*ptr;
		while(last->next)
			last=last->next;
		last->next=new;
	}
}
