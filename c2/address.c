#include<stdio.h>

int main()
{
	int a;
	int b;
	printf("&a=%p, &b=%p\n" , &a,&b);
	(*&a)=100;(*&b=888888);
    printf("%d,%d\n",a,b); 
	return 0;
}
