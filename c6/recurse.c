#include<stdio.h>

int f(int x)
{
	printf("call f(%d)&x=%p\n",x,&x);
	if(x<=0)
		return 5;
	else{
		int g=f(x-1);
		printf("return from f(%d) with %d\n",x-1,g);

		return 2*g+3;}
}
int main()
{	int n;
	printf("please enter a num:");
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}
