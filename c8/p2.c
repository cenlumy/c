#include <stdio.h>

int main()
{
	char c;
	int* pc;
	int n;
	int* pn;
	short s;
	short *ps;
	double d=1.23;
	double* pd=&d;
	double** pp=&pd;//pp是一个指向double*变量的指针
	printf("&c= %p\n",&c);
	printf("&pc=%p\n",&pc);
	printf("&n= %p\n",&n);
	printf("&pn=%p\n",&pn);
	printf("&s= %p\n",&s);
	printf("&ps=%p\n",&ps);
	printf("&d= %p\n",&d);
	printf("&pd=%p\n",&pd);
	printf("&pp=%p\n",&pp);

	return  0;
}
