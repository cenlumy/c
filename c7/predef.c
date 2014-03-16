#include<stdio.h>

int main()
{
	puts(__FILE__);
	printf("%d\n",__LINE__);//除了line 是整数外 其它都是字符串
	puts(__DATE__);
	puts(__TIME__);
//	__STDC__
	return 0;
}
