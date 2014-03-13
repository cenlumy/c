#include<stdio.h>

void swap(int a, int b)
{
	printf("a=%p,b=%p\n",&a,&b);
	printf("in:a=%d,b=%d\n",a,b);
	int t =a;
	a = b;
	b =t;    //  很少用位运算实现交换
	printf("out:a=%d,b=%d\n",a,b);
}
int main()
{
	static int m=10, n=20;
	printf("m=%p,n=%p\n",&m,&n);
	swap(m,n);
	printf("m=%d,n=%d\n",m,n);
	return 0;
}
