#include <stdio.h>

int main()
{
	char x[8]={'a','b','c','d','f','g','h','i'};
//	puts(x);
	char* p1;
	p1 = &x[0];  //   p1的类型是字符类型。
	char* p2=&x[2];
	printf("%d\n",*p1);
	*p1 ='A';
	*p2 ='C';
	puts(x);
	int* p3=(int*)&x[0];
	printf("%X\n",*p3);
	return 0;
}
