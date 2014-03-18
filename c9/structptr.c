#include <stdio.h>
typedef unsigned short int unit16;
typedef struct data{//此处的结构体变量如果是六个字节因为阿s
                      //因为short int 是两个字节的
		unit16  year;
		unit16 month;
		unit16 day;
}date;
void print(date const* d)//通过这个d不会修改它所指的数据
{                          //但是别的可以通过其它方式修改
  printf("year=%d month=%d day=%d\n",(*d).year,(*d).month,(*d).day);
  printf("%dyear %dmonth %dday\n",d->year,d->month,d->day);
}
int main()

{
	date a[3]={{2010,6,13},{2010,10,1},{2010,5,5}};
	int i;
	for(i=0; i<3; i++)
		print(&a[i]);//在c语言中传递接结构变量总是传递地址
		return 0;//因为复制的时候
}

