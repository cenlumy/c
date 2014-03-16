#include <stdio.h>
#include <string.h>

int main()
{
	char a[100]={'h','e','\0','w','o'};
	"chenlumin";//const char[10]
	puts(a);
	puts("chenlumin");
	char* p=a;
	puts(p);
	printf("%c\n",*p);
	*p='w';
	puts(a);
	puts(p);
	p = "chenlumin";
	printf("%c\n",*p);
//	*p='w';此处对常量赋值，会产生段错误。
	const char* q=NULL;
	q = "chenlumin";
	p=a;
	strcpy(a,"NB");
	puts(p);
	q = a+3;
//	*q ='w';
	puts(q);
	char * const r=a+1;
	puts(r);
	*r='A';
	puts(a);
	//char * str;
	//scanf("%s",str);
	//strcpy(str,"hello");
	return 0;
}
