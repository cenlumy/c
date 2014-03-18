#include <stdio.h>
//对排序规则约定：保持顺序就返回0，需要交换就返回1
int rule(double lh, double rh)
{
       return (lh>rh);  //	if(lh>rh)
	//	return 1;
	//else
	//	return 0;
}
int rulei(double lh, double rh){return (rh>lh);}

#define swap(x,y) {double t=x;x=y;y=t;}
void sort(double a[], int n, int (*p)(double ,double))
{
	int i, j;
	for(i=0; i<n;i++)
		for(j=i+1; j<n; j++)
			if(p(a[i],a[j])==1)
				swap(a[i],a[j]);//因为此处传递的是a【i]
}//和a【j]所以不能写一个swap函数去交换顺序
// 但是有个好的想法就是用#define swap（x,y) 
//这个宏函数不是调用，而是直接替换的意思，就是说没有传递参数之类的，所以行的通
//int (*x(void(*p)())(char)//x是一个指向函数的指针，函数是一个指针
//typedef void(*T)();
//typedef int (*U)(char);
void input (double a[],int n)
{
	printf("please enter ten float data\n");
	int i;
	for(i=0; i<10; i++)
		scanf("%lf",a+i);//&a[i]
}
void show(double a[],int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%g ",a[i]);
		printf("\n");
}

int main()
{
	double a[10];
	input(a,10);
	sort(a,10, &rule);
	show(a,10);
	sort(a,10,&rulei);
	show(a,10);
	return 0;
	}
