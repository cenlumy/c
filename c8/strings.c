#include<stdio.h>

int main()
{
	char * names[9]={ "陈露敏","杨勇"," 王刚"," 王龙"," 李零"," 中龙了", "的房间"," 觉得", "地方"};//注意这个数组只是保存了9个字符串的首地址这写字符串真正保存在只读存储区里面
	int i;
	for(i=0; i<9; i++)
		printf("appreciate%sattend the speech\n",names[i]);
	const int a=1 , b=2, c=3, d=5,e=4,f=6;
	const int* p[6]={&a,&b,&c,&d,&e,&f};
	int j;
	for(i=0; i<6; i++)
		for(j=i+1; j<6; j++){
			if(*p[i]>*p[j]){
			const int* t= p[i]; p[i]=p[j];p[j]=t;
		}}
	for (i=0; i<6; i++)
		printf("%d ", *p[i]);
		printf("\n");
	return 0;
}
