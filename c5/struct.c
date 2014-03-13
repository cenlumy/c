#include<stdio.h>

typedef struct Goods{
	char name[18];//18
	double price;//8
	char special;//1
	int num;//4
	short saled;//2
}gs;
typedef struct Book{
	char name[3];
	int isbn;
	double expense;
}bk;
//  typedef struct Goods gs
int main()
{
//	gs a[10];
 	printf("%d\n",sizeof(gs));
 	printf("%d\n",sizeof(bk));
	return 0;
}
