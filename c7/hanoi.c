#include<stdio.h>

void hano(char from, int n,char to, char spare)
{
	if(n>0)
	{
		hano(from,n-1,spare,to);
		printf("move %d %c==>%c\n",n,from,to);
		hano(spare,n-1,to,from);
	}
}
int main()
{
	hano('a',3,'b','c');
	return 0;
}
