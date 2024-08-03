#include<stdio.h>
void main()
{
	int a[20],i,j,ele,t;
	printf("Enter the size of array:");
	scanf("%d",&ele);
	printf("Ente the array ele:\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	/////logic/////
	for(i=0;i<ele-1;i=i+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}

	printf("After the swapping:\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
