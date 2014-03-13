#include<stdio.h>
int main()
{
	printf("我们这里有如下的课程:\n");
	printf("1--c++\n");
	printf("2--嵌入式\n");
	printf("3--java\n");
	printf("WHICH ONE DO YOU WANT SELECT?\n");
	char ch;
	scanf(" %c",&ch);
	switch(ch){
	case '1':     //  如果定义是char时候  case里面要
				//咨询    	
		printf("学会c++，走边天下都不怕\n");
		break;
	case '3':
		printf("学会java，不怕没有妞泡\n");
		break;
	case '2':
		printf("学会嵌入式，可以吹喇叭了\n");
		break;
	default:
	    printf("其他的真的 需要考虑考虑了\n");	
	}

	return 0;
}
