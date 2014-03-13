#include<stdio.h>
enum bool{true=1,false=0};//枚举里面的值通称为枚举常量从零开始
enum mode{UREAD=0400,UWRITE=0400,UEXEX=0100,GREAD=0040,GWRITE=0020,GEXEC=0010,OREAD=0004,OWRITE=0002,OEXEC=0001,NONE=0000};
enum course{CPP,JAVA,DOTNET,TEST};
int main()              //依次增， enum里面可以指定 没有
{						//它就会依次加1；
	printf("%d\n",true);
	printf("%d,%d,%d,%d\n",CPP,JAVA,DOTNET,TEST);
	printf("%d--C++\n",CPP);
	printf("%d--JAVA\n",JAVA);
	printf("%d-DONET\n",DOTNET);
	printf("%d-TEST\n",TEST);
	printf("make your choice:");
	int n;
	scanf("%d",&n);
	switch(n){
		case CPP: puts("CPP course"); break;
		case JAVA: puts("JAVA course"); break;
		case DOTNET: puts("DONET course");break;
		case TEST:puts("TEST course"); break;
		default :puts("invalid"); break;
		}
		enum bool a;
		typedef enum bool BL;
		BL b;
		a=true;
		b=false;
		printf("a=%d,b=%d",a,b);


	return 0;
}
