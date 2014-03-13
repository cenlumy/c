#include<stdio.h>

int main()
{
	int age;
	printf("请出入年龄:");
	scanf("%d",&age);
	if(age<0 || age >1000 )
{
	printf("这不可能是人类\n");
}
else if(age<=16);
{
	printf("小不点不要捣乱");
	return 0;
}
}
