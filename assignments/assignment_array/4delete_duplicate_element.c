#include<stdio.h>
void main()
{
	int a[10],ele,i,j,k;
	printf("Enter the array size:");
	scanf("%d",&ele);

	printf("Enter the array elements:\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");

	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");

	//////logic////
	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<ele-1;k++)
				{
					a[k]=a[k+1];

				}
				ele--;
				j--;//NOTE: only decrement j index and not i;
			}
		}
	}
	printf("After deleting the duplicate elements:\n");
	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");
}
