#include<stdio.h>
//#pragma pack(1)
struct A
{
	char ch1;
	char ch2; 
	int i;
};

void main()
{
	struct A a1;
	printf("size=%ld\n",sizeof(a1));
	//printf("%u %u %u\n",&a1.i,&a1.ch,&a1.f);
}
