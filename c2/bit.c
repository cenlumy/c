#include<stdio.h>
int main()
{
	printf("~20=%d,%d,%d\n",~20,~-1,~0);
	unsigned int n=-1;
	printf("%u\n,%x,%d\n ",n,n,n);
	int m=-1;
	printf("%x, %x\n",n>>3,m>>3);
	printf("%x, %x\n",n<<3,m<<3);
	printf("%x, %x\n",n,m);
	return 0;
}
