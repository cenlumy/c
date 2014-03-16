#include<stdio.h>


char* func()
{
	char a = '#';
	return &a;
}
int main()
{
	char c='@';
	char* p=&c;
	*p ='$';
	printf("c=%c\n",*p);
	printf("c=%c\n",c);
	p =func();
	printf("c=%c\n",*p);
	return 0;
}
