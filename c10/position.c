#include <stdio.h>

int main()
{
	FILE* fp =fopen("file","r+");
	if(fp==NULL){
		printf("无法打开文件file\n");
	}
	int c;
	while((c=fgetc(fp))!=EOF){
		putchar(c);
		fputc(fgetc(fp),fp);
	}
	putchar('\n');//我本身的读的这个file后面没有加换行符号。
	fclose(fp);
	return 0;

}
