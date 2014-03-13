#include <stdio.h>
#include "check.h"
#include "convert.h"
int main()
{
	char c;
	printf(" enter a sentence:");
	do{
		scanf("%c", &c);
		if(isLower(c))
			printf("%C",toUpper(c));
		else if(isNum(c))
			toChinese(c);

		else
			printf("%c",c);
	}while(c!='\n');
	return 0;
}
