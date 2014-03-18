#include <stdio.h>

int main()
{
	FILE* fp = fopen("file","r+");
	if(fp == NULL){
		printf("fail to open the file.");
		return 1;
	}
	fseek(fp,3,SEEK_SET);
	char c4,c25;
	c4=getc(fp);
	fseek(fp,20,SEEK_CUR);
	c25=getc(fp);
	fseek(fp,-22,SEEK_CUR);
	putc(c25,fp);
	fseek(fp,-2,SEEK_END);//end是最后一个字符的后面
	putc(c4,fp);
	fclose(fp);
	return 0;
}
