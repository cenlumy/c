#include<stdio.h>

void show(double a[],int n)
{
	double x=123.45;
	printf("sizeof=%d\n",sizeof(a));
	a = &x;
	printf("*a=%g\n", *a);
}
void print(double* p,int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%g ",p[i]);
		printf("\n");
}
int main()
{
	double a[5]={1.1,2.2,3.3,4.4,5.5};
	show(a,5);
	print(a,5);
	return 0;

}
