#include<stdio.h>



void print(int x[],int n)
{
	int i;
	for(i=0; i<n; i++){
		printf("%d ",x[i]);
		printf("%p",&x[i]);
		printf("\n");

	}

}
void add(int x[], int n)
{
	int i;
	for (i=0; i<n; i++)
		x[i] <<=1;
}

void reverse(int x[], int n)
{
	int i;
	int temp;
	for(i=0; i<=(n-1-i); ++i)
	{
		temp=x[i];
		x[i]=x[n-1-i];
		x[n-1-i]=temp;
	}


}
int main()
{
	int a[5] ={11,22,33,44,55};
	int b[6] ={1,2,3,4,5,6};
	int i;
	for(i=0; i<5; i++){
		printf("%d ",a[i]);
		printf("%p",&a[i]);
		printf("\n");
	}
	for(i=0; i<6; i++){
		printf("%d ",b[i]);
		printf("%p",&b[i]);
		printf("\n");
	}
	print(a,5);
	print(b,6);
	add(a,5);    //传递实参到形参里面改变，形参改变
	print(a,5);// 看看实际参赛是否改变，实际参数改变
	reverse(a,5);
	print(a,5);
	return 0;//以上说明数组实参和形参是同一个数组。
}
