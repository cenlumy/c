#include <stdio.h>
//fread/fwrite(内存地址，每个元素字节数，元素个数，文件）
typedef struct person{
	char name[20];//20b
	char gender;//1b
	int age;//4b+3b
	double salary;//8b
}person;//36b
int main()
{
	person a[5]={{"李欢",'F',18,3500},{"李欢",'F',18,3500},{"李欢",'F',18,3500},{"李欢",'F',18,3500},{"李欢",'F',18,3500}};
	FILE* fp = fopen("person.dat","wb");
	if(fp==NULL){
		printf("fail to open the file");
		return 1;
	}
	int b[10]={11,22,33,44,55,66,77,88,99,1010};
	short s=12456;
	fwrite(a,sizeof(person),5,fp);
	fwrite(b,sizeof(int),10,fp);
	fwrite(&s,sizeof(short),1,fp);

	return 0;
}
