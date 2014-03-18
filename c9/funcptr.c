#include <stdio.h>
void lihuan(int n)
{
	printf("李欢，我爱你\n");
}
void chunge(int n)
{
	printf("春哥，三围是多少\n");
}
int main(int argc, char* argv[])
{
	if(argc<1) return 0;//这样做的话有几个字符串就执行几次
	int* f(char);//f是一个函数 型参char类型，返回int*类型
	int (*p)(char);//p是一个指针，指向一个形参char返回int的函数
	int(*q)();//   q是一个指针，指向一个形参任意返回int的函数
	printf("&main=%p\n",main);
//	p=&main;//   这边行不通是因为main函数形参和p指向一个形参char返回 int 类型的函数  不一样。
	q=main;
	int n;
	int*r =&n;
		(*q)(argc-1,argv);//此处的*号可以不加因为是函数名就是寒酸地址但是习惯上有加*
		void (*fp)(int n);
		fp=lihuan;
		fp(18);
		fp=chunge;
		fp(19);

	return 0;
}

