#include<stdio.h>
int main()
{
	int n=10;
	printf("%i\n",sizeof(int));
	printf("%i\n",sizeof(n));
	printf("%i\n",sizeof(n+5));
	printf("%i\n",sizeof(n+5.4));
	printf("%i\n",sizeof(n=123));
	printf("%i\n",n);
    return 0;
}
	
