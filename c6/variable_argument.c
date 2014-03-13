#include<stdio.h>
#include<stdarg.h>
int max(int cnt, ...)
{
	va_list v;
	va_start(v,cnt);
	int maxvalue=va_arg(v,int);
	int i;
	for(i=0; i<cnt; ++i){
		int data=va_arg(v,int);
		if (data>=maxvalue)
			maxvalue=data;

	return maxvalue;
	}
}
void printchar(int cnt,...)

{
	va_list v;
	va_start(v,cnt);
	int i;
	for(i=0; i<cnt; ++i)
		printf("%c",va_arg(v,int));
		printf("\n");
		va_end(v);
}
void printstring(int cnt,...)
{
	va_list v;
	va_start(v, cnt);
	int i;
	for(i=0; i<cnt; ++i)
		puts(va_arg(v,char*));
		va_end(v);
}
int main()
{
	printf("%d\n",max(2,88,69));
	printf("%d\n",max(5,91,25,86,97,56));
	printf("%d\n",max(5,88,69,56,24,5,5));
	printchar(3,'d','f','d');
	printchar(5,'d','f','d','h','f');
	printstring(2,"hello","lumin");
	printstring(3,"hello","lumin","you good");
}
