#include <stdio.h>

int main()
{
	FILE* fi=fopen("in","r");//当前目录直接写文件名。
	if(fi==NULL){
		printf("打开文件失败\n");
		return 1;
	}
	char name[2];
	int age;
	double weight;
	fscanf(fi,"%s",name);
	fscanf(fi,"%d%lf",&age,&weight);
	fclose(fi);//其中fi就代表文件对它做++等运算都是没有意义的
	printf("name:%s %d years old weight:%g\n",name,age,weight);
	FILE* fo=fopen("out","w");
	if(fo==NULL){
		printf("打开文件out失败\n");
		return 2;
	}
	fprintf(fo,"向文件中写内容\n");
	fprintf(fo,"name:%s age:%d weight:%g\n",name,age,weight);
	fclose(po);
	return 0;
}

	
