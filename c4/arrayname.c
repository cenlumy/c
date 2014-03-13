#include<stdio.h>
int main()
{

	int a[5]={11,22};
	double d[3];
	char s[9];
	printf("%d, %d, %d\n",sizeof(a),sizeof(d),sizeof(s));
	(*&a)[0]=123;
	int i;
	for(i=0; i<2; i++)
		printf("%d ",a[i]);
		printf("\n");
	return 0;
}
