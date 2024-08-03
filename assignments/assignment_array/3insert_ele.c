#include<stdio.h>
void main()
{
	int a[10],pos,num,ele,i;
	printf("Enter the array size:");
	scanf("%d",&ele);
	printf("Enter the array ele:\n");

	for(i=0;i<ele-1;i++)
		scanf("%d",&a[i]);
	printf("\n");

	for(i=0;i<ele-1;i++)
		printf("%d",a[i]);
	printf("\n");

	printf("Enter the pos:");
	scanf("%d",&pos);
	printf("Enter the element to insert:");
	scanf("%d",&num);

	///////logic/////
	for(i=ele-1;i>pos;i--)
		a[i]=a[i-1];
	a[pos]=num;
       //////////////////
	printf("After insertion:\n");
	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");
}
