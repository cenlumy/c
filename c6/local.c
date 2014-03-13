#include<stdio.h>
char* weekday(int n)
{
static char w[7][10]={"monday","tuesday","wednesday","thuresday","friday","saturday","sunday"};
	return w[n];
}

int counter()
{
static int cnt=0;
	return ++cnt;
}
double d;


int main()
{
	printf("%s\n",weekday(1));

auto signed	int i ;
	for (i=0 ;i!=5; ++i)
		printf("%d\n",counter());

	printf("%lf\n",d);
	return 0;
}
