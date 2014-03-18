#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b=sizeof(double);
	double* p= (double*)malloc(b);
	int cnt;
	printf("请输入元素的个数\n");
	scanf("%d",&cnt);

	int* q= calloc(cnt,sizeof(int));
	printf("p=%p,q=%p\n",p,q);
	*p=123.4;
	int i;
	for(i=0; i<5; i++)
		q[i]=i+10;
		printf("%g\n",*p);
	for(i=0; i<5; i++)
		printf("%d ",q[i]);
		printf("\n");
		free(p);
		q= realloc(q,sizeof(int)*10);
		if(q==NULL){
			printf("申请空间失败\n");
			return 1;
		}
	for(i=0; i<10; i++)
		printf("%d ",q[i]);
		printf("\n");

	return 0;
}
