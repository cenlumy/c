#include<stdio.h>
int main()
{
	int n;
	int cnt;
	do{
		printf("please input a number between1~9;");
		cnt=scanf("%d",&n);
		scanf("%*[^\n]%*c");
	}while(cnt!=1 || n<1 ||n>9);
	int i, j;
	for(i=1; i<=n; ++i)
	{
		for(j=1; j<=i; j++)
			printf("%dx%d=%d%c",j,i,j*i,i==j?'\n':',');
	}
	return 0;
	
}
