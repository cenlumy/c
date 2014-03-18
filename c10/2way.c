#include <stdio.h>
//int fgetc(FILE*)/fputc(int,FILE*)
int main(int argc, char* argv [])//这样写的话函数就支持命令行参数
{
	//a.out filename copyfile
	if(argc!=3){
		printf("%s filename copyfile\n\n", *argv);
		return 0;
	}
	FILE* fi =fopen(argv[1],"r");
	if(fi==NULL){
		printf("can't open the file%s\n",argv[1]);
		return 1;
	}
	FILE* fo =fopen(argv[2],"w");
	if(fo==NULL){
		printf("can't open the file%s\n",argv[2]);
		return 2;
	}
	char c;
	while((c=fgetc(fi))!=EOF){//  把每次读的字符用c保存防止释放
		putchar(c);
		fputc(c,fo);//		把字符放进文件fo中，就是第二个file
	}
	fclose(fi);
	fclose(fo);

	return 0;
}

