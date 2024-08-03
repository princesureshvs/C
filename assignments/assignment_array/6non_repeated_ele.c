#include<stdio.h>
void main()
{
	int a[20],i,j,ele,count;
	printf("Enter the size of array:");
	scanf("%d",&ele);

	printf("Enter the array elements:\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");

	/////logic/////
	for(i=0;i<ele;i++)
	{
		for(j=0,count=0;j<ele;j++)
		{
			if(a[i]==a[j])
				count++;
		}
		if(count==1)
			printf("%d",a[i]);
	}
}
