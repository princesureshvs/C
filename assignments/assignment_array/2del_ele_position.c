#include<stdio.h>
void main()
{
	int a[10],i,k,pos,ele;
	printf("Enter the array size:");
	scanf("%d",&ele);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	printf("Enter the position to delete:");
	scanf("%d",&pos);

	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");

	for(k=pos;k<ele-1;k++)
		a[k]=a[k+1];
	ele--;
	printf("After deleting\n");
	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");
}
