#include <stdio.h>
int main()
{
	char* s="luhuan";
	printf("%d %10d %-10d %010d %+d\n",123,123,123,123,123);
	printf("%f%10f %-10f %06.3f %6.2f\n",9.9,9.9,9.9,9.9,9.9);
	printf("%s %10s %-10s %6.3s \n",s,s,s,s,s);//字符串没有
	int w=10;
	for(w; w<15; w++)
	printf("%c, %*c\n",'a',w,'a');
	int x,y;
	printf("in put two integer:");
	scanf("%3d%5d",&x,&y);
	printf("x=%d, y=%d\n",x,y);
	scanf("%*d%d",&x);
	printf("x=%d\n",x);
	char str[100],st[100];
	scanf("%*[^\n]");scanf("%*c");
	scanf("%[a-z]%[^a-z]",str,st);
	printf("str=%s, st=%s\n",str,st);
	return 0;//补零填充的用法小数的用法是占六个宽度只用前面
}//三个字符的宽度
