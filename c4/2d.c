#include<stdio.h>
int main()
{
	int a[3][5]={{1,2},{3},{4,5}};
	int i, j;
	for(i=0; i<3; i++){
		printf("%p\n",a[i]);
		for(j=0;j<5; j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");}
	char names[2][20]={"chenlumin","chenhuiya"};
	for(i=0; i<2; i++)
		printf("support yourself,%s!\n",names[i]);
	return 0;

}
