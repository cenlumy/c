#include<stdio.h>

int main(int argc,char*argv[])
{
	printf("%d\n",argc);
	int i;
	for(i=0; i<argc; i++)
	printf("%d:%s\n ",i,argv[i]);
	return 0;//注意命令行都是字符串，即使数字也是类似”12“‘”34“
}
