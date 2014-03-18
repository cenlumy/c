#include <stdio.h>

int main()
{
	printf(" 我爱李欢");
	fflush(stdout);
	printf("hello");
	sleep(10);//sleep 在linux中才行。windows不能用这个函数
	printf("world");
	return 0;
}
