#include <stdio.h>

int main()
{
	int i;
	int d;
	for(i=0; i<3; i++)
	{
	//	printf("请输入一个整数");
	//	scanf("%d",&d);
	//	printf("你输入的是%d\n",d);
	//	scanf("%*[^\n]");scanf("%*c");
		d=getchar();
		if(d==EOF){
			printf("read inerrupt\n");
			break;
	}
	putchar(d);
	printf("%c(%d)\n",d,d);
	}

	return 0;
}
