#include<stdio.h>
#include<string.h>
extern char w[7][10];//  此处编译器会理解成定义了一个数组所以要用exte
   //   但是我是过了明明可以的啊。
extern char e[7][10];
extern char* week(int n);
void showweekday(int n);
char* weekday(int n)
{

	return w[n];
}
int main()
{
	printf("%s\n",weekday(3));
//	strcpy(week(3),"Fengjie");
	//printf("%s\n",week(3));
	
	showweekday(3);
	return 0;
}
