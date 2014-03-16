#include <stdio.h>

int main()
{
	int a[5]={11,22,33,44,55};
	int *p;
	printf("p=%p\n",p);
	int* q=NULL;
	printf("p=%p,%d\n",q,q);

	#define TYPE int*
	union{
		TYPE x;
		char b[sizeof(TYPE)];
	}u;
	u.x=q;
	int i;
	for(i=0; i<sizeof(TYPE); i++)
	printf("%d ",u.b[i]);
	printf("\n");
//	*p =100;
	p=a;
	for(i=0; i<5; i++) printf("%d ",a[i]);printf("\n");
	for(i=0; i<5; i++) printf("%d ",*(a+i));printf("\n");
	for(i=0; i<5; i++) printf("%d ",p[i]);printf("\n");
	for(i=0; i<5; i++) printf("%d ",*(p+i));printf("\n");
	printf("%d\n",(p+2)[1]);
	q=p+3;
	printf("%d\n",1[q]);
	printf("p=%p,q=%p,q-p=%d\n",p,q,p-q);
	for(i=0; i<5; i++) printf("%d ",*p+i);printf("\n");
	for(i=0; i<5; i++) printf("%d ",*p++);printf("\n");
	for(i=0; i<5; i++) printf("%d ",p[i]);printf("\n");
	for(i=0; i<5; i++) printf("%d ",*--p);printf("\n");


	return 0;
}
