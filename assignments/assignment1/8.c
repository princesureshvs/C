#include<stdio.h>
void main()
{
	int num,num1,sum,digit;
	printf("Enter the number:");
	scanf("%d",&num);

	for(num1=num,sum=0;num;num=num/10)
	{
		digit=num%10;
		/*if((digit&1) == 0)
		  sum=sum+digit;*/
		digit&1?:(sum=sum+digit); 
	}
	printf("sum of even = %d\n",sum);
}
