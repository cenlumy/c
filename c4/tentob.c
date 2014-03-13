#include<stdio.h>

int main()
{
	const int bits = sizeof(int)*8;
 	unsigned int mask=1<<bits-1; //0x80000000;
	int n;
	printf("input an integer:");
	scanf("%d",&n);
	int i;
	for(i=0;i<bits;++i)
	{
 //		 printf("%c",n&mask?'1':'0');
 //		 mask >>= 1;//   give mask a solid number
 //		 printf("%c",n<0?'1':'0');
 		 printf("%d",n<0);
		 n<<=1;
	}
	printf("\n");
	return 0;
}
