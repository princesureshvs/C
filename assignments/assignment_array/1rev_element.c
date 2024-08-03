#include<stdio.h>
void main()
{
	int a[10],ele,i,j,t;
	printf("enter the array ele:");
	scanf("%d",&ele);
	printf("Enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");

	for(i=0,j=ele-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}

	printf("The array elements are:");
	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");
}
