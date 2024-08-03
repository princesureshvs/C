#include<stdio.h>
void main()
{
	int a[5],i,num;
	printf("Enter the array elements:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	printf("Array elements:");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);

	printf("Enter the number to check:");
	scanf("%d",&num);

	int sum,c;

	for(i=0,c=0,sum=0;i<5;i++)
	{
		if(sum<num)
			sum=a[i]+sum;
		else if(sum==num)
		{
			c++;
		}
		else if(sum>num)
		{

		}
	}
}
