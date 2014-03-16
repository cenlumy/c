#include <stdio.h>
void welcomestudent(){printf("welcome student!\n");}

#define SWAP(T,x,y) {T t=x; x=y; y=t;}
#define MAX(x,y) (x<y?y:x)//记得用括号括起来，避免引起歧义
#define PI 3.14159
#define AREA(r) PI*(r)*(r)
#define STR(x) puts(#x)
void welcometeacher(){STR(welcome teachers!);}
#define wel(who) welcome##who()
int main()
{
	int a=10, b=20;
	double c=12.3, d=45.6;
	int e=50, f=60;
	SWAP(int ,a,b)
	SWAP(double,c,d)
	printf("%d,%d\n",a,b);
	printf("%d\n", MAX(a,b));
	printf("%g\n",AREA(a+b));
	printf("%g,%g\n",c,d);
	printf("%d\n",MAX(a,b)+MAX(e,f));
	printf("%d\n",MAX(++a,++b));//
	wel(student);
	wel(teacher);
	

	return 0;
}

