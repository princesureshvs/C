#include<stdio.h>
void main()
{
	int a[20],ele,i,j,k,c;

	printf("Enter the array size:");
	scanf("%d",&ele);

	printf("Enter the array elements:\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");

	////logic////
	for(i=0;i<ele-1;i++)
	{
		for(j=i+1,c=0;j<ele;j++)
		{
			if(a[i]==a[j])
			{   
				c++;
				for(k=j;k<ele-1;k++)
					a[k]=a[k+1];
				ele--;
				j--;
			}
		}
		if(c>0)
			printf("%d-->%d times\n",a[i],c+1);
	}
}
