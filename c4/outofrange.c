#include <stdio.h>
int main()
{
	int x=123;
	int a[5]={11,22,33,44,55};
	int y=456;
	int i;
	for(i=-2; i<8; i++)//  越界访数据可能会访问到无法预知的数据
		printf("%d ",a[i]);
		printf("\n");
		printf("x=%d,y=%d",x,y);
		printf("\n");
		printf("&x=%p, a=%p, &y=%p, &i=%p\n",&x,a,&y,&i);
	for(i=0; i<7; i++)//越界存放数据可能会破坏其他变量的值
		a[i]=0;
		printf("x=%d, y=%d\n", x,y);
//越界存放数据甚至可能导致程序崩溃
		return 0;
}
