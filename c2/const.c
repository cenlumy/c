#include<stdio.h>
#define CLASS "csd1007"
#define AA PI*
#define BB 10+student_num
#define DATE 20100730
int main()
{
	const double PI=3.14;
	int const student_num=40;
	printf("PI=%g,student_num=%d\n",PI,student_num);
	//PI=3.12;//可能会出现编译出现错误
	printf("%s,%d\n",CLASS,DATE);   
	printf("%g\n",AA BB);
	return 0;//凡是有标点符号要统统弄成英文的不要写成中午
}
