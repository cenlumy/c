#include<stdio.h>
/*
%c 字符
%d，%x，%o  十进制，十六进制， 八进制证书
%ld， %hd： long int， short int
%f： float
%lf：double
%s：字符串
*/
int main()
{
	int n=0;
	float f=0;
	double d=0;
	char c=0;//'0'
	scanf("%d%f",&n,&f);	
	printf("%d,%g\n",n,f);
	scanf("%lf",&d);
	printf("%g\n",d);
	scanf("%c",&c);
	printf("c=[%c](%d)\n" ,c,c);
	return 0;
}
