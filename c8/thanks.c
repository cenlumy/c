#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{

	int i;
	if(argc==1){
			printf("没有带要感谢的小朋友");
			return 0;}//return 完之后就会跳到shell因为是shell调用的
	if(strcmp(argv[0],"thanks")!=0){
		printf("请用正版\n");
		return 1;
	}
	for(i=1; i<argc; i++)
		printf("感谢你，%s!\n",argv[i]);
		return 0;
}
