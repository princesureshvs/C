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
void search_node(SLL *);
void read_file(SLL **);
void add_middle(SLL **);
void delete_all(SLL **);
void delete_node(SLL **);


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
			case 3:add_middle(&headptr);break;
			case 4:print_node(headptr);break;
			case 5:c=count_node(headptr);printf("count=%d\n",c);break;
			case 6:save_file(headptr);break;
			case 7:read_file(&headptr);break;
			case 8:reverse_print(headptr);break;
			case 9:print_rec(headptr);break;
			case 10:rev_rec(headptr);break;
			case 11:delete_all(&headptr);break;
			case 12:delete_node(&headptr);break;
			case 13:search_node(headptr);break;
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

void search_node(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No nodes found\n");
		return;
	}
	char s[20];
	int flag=0;
	printf("Enter the name:");
	scanf("%s",s);
	while(ptr)
	{
		if(strcmp(s,ptr->name)==0)
		{
			printf("%d %s %f",ptr->rollno,ptr->name,ptr->marks);
			flag=1;
		}
	}
	if(flag==0)
		printf("No names  found\n");
}


void read_file(SLL **ptr)
{
	FILE *fp=fopen("std.txt","r");
	if(fp==0) 
	{
		printf("No file is present\n");
		return;
	}

	SLL *new,*last;

	while(1)
	{
		new=malloc(sizeof(SLL));
		if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->marks)==-1)
			break;

		new->next=0;
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
	fclose(fp);
}


void add_middle(SLL **ptr)
{
	SLL *new=malloc(sizeof(SLL));
	SLL *last;
	printf("Enter the roollno name and marks:\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	if((*ptr==0) || (new->rollno < (*ptr)->rollno))
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		last=*ptr;
		while( (last->next !=0) && (new->rollno > last->next->rollno))
			last=last->next;
		new->next=last->next;
		last->next=new;
	}
}

void delete_all(SLL **ptr)
{ 
	if(*ptr==0)
	{
		printf("No nodes to delete:\n");
		return;
	}
	SLL *del;
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	printf("All nodes have been successfully deleted:\n");
}


void delete_node(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No node found\n");
		return;
	}
	int num;
	printf("Enter the rollno to delete:");
	scanf("%d",&num);

	SLL *del=*ptr,*prev;

	while(del)
	{
		if(del->rollno == num)
		{
			if(*ptr==del)
				*ptr=del->next;
			else
				prev->next=del->next;
			printf("node deleted%d",del->rollno);
			free(del);
			return;
		}
		prev = del;
		del=del->next;
	}
	printf("No rollno found\n");
}
