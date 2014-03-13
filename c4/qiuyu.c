#include<stdio.h>
int main()
{
	int n=-1;//  负数是她对应的整数按位取反加一
	unsigned uns=n;//   此处的作用是让符号位变成一个数
	printf("%d,%x\n",uns%2,uns/2);
	return 0;
}
