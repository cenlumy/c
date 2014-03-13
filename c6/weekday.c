#include<stdio.h>
char w[7][10]={"星期一","星期二","星期三","星期四","星期五","星期六","星期日"};
static char e[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
static char* week(int n)
{
	return e[n];
	}
 void showweekday(int n)
 {
	 printf("%s\n",e[n]);
 }
