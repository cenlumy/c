#include<stdio.h>
typedef enum gender{MALE,FEMALE}gender;
typedef char A[20];
typedef struct person{
	char name[20];
	enum gender s;
	int age;
	double income;
}person;

int main()
{
	A str="good";
	puts(str);
	person a;
	person b={"chenlumin",MALE,21,0};//对结构体的初始化
	//   其中一般只需要定义就行了  变量不需要在结构体里面初始化
	printf("%sis a %d's %s, salary%g\n",b.name,b.age,
	b.s==MALE?"handsomeboy":"prostitute",b.income);
return 0;
}
