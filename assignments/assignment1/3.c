#include<stdio.h>
void main()
{
   int num;
   printf("Enter the number:");
   scanf("%d",&num);
   num&7?printf("No\n"):printf("yes\n");
}
