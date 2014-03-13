#include<stdio.h>

int main()
{
	int a[10];//   方括号里面是元素的个数
	int i;
	for(i=0; i<10; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	int num[4]={30,16,22,18};
	for(i=0; i<4; i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	int b[5]={11};
	for(i=0; i<5 ;i++)
		printf("%d ",b[i]);
		printf("\n");
	char c[5]={'2','e','f','4'};
	for(i=0; i<5; i++)
		printf("[%c]%d",c[i],c[i]);
		printf("\n");
	a[0]=123;
	a[1]=10; a[2]=20, a[3]=30, a[4]=40;
	printf("Please enter 5 integer;");
	for(i=5; i<10; i++)
		scanf("%d",&a[i]);
	for(i=0; i<10; i++)
	printf("%d,",a[i]);
	printf("\n");
	
	return 0;
}
