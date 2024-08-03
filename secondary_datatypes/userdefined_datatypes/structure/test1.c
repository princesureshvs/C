#include<stdio.h>
struct A
{
	char ch;
	int i;
	float f;
};

struct A ret_struct(void);

void main()
{
	struct A a1;
	a1=ret_struct();
	printf("%c %d %f\n",a1.ch,a1.i,a1.f);
}

struct A ret_struct(void)
{
	struct A a2={'a',10,22.5};
	return a2;
}
