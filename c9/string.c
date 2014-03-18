#include <stdio.h>
//sscanf, sprintf

int main()
{
	char buf[100];
	sprintf(buf,"hello ,i'm %s,today is %d-%d-%d\n",
	"lihuan",2014,3,19);
	puts(buf);
	int age;
	char name[20];
	double salary;
	const char* str="20 lihuan 20000";
	sscanf(str," %d%s%lf",&age,name,&salary);
	printf("i am%s,今年%d 月薪%g\n",name,age,salary);
	return 0;
}

