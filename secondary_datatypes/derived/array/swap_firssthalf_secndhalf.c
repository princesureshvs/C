#include<stdio.h>
void main()
{
	int a[20],i,j,ele,t;
	printf("Enter the array size:");
	scanf("%d",&ele);
	printf("Ente the array ele:\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	/////logic/////
	for(i=0,j=ele/2;i<ele/2;i++,j++)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("After swapping:\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
