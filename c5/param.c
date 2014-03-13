#include<stdio.h>
#include"func_clear.h"
int get(int a, int b)
{	
	printf("a=%d,b=%d\n",a,b);
	int n;
	do{
		printf("please enter%d to %d's enteger:",a,b);
	   if(scanf("%d",&n)!=1)//把参数  a，b 穿进去就开始按步执行差i
	   {
		   clear();
	   }
	}while(n<a || n>b);
		return n;//函数

}
int main()
{
	int n = get(1,100);
	int m = get(10,50);
	printf("n=%d,m=%d\n",m,n);
	return 0;
}
