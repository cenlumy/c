#include <stdio.h>

int main()
{
	int n;
	double d;
	char str[100];
	fprintf(stderr,"please enter name years old and weight:");
	sleep(3);
	fscanf(stdin,"%s%d%lf",str,&n,&d);
	fprintf(stdout,"%s : %dyears old, %gKg\n",str,n,d);
	return 0;
}
