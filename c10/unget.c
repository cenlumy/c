#include <stdio.h>

int main()
{
	printf("enter something interesting please\n");
	char str[1000];
	double data;
	register int c;
	for(;;){
		c = getchar();
	if(c=EOF) break;
	if(isspace(c))continue;
		ungetc(c,stdin);
		if(c>='0'&&c<='9'){
			scanf("%lf",&data);
			printf("data=%lf\n",data);

		}
		else{
			scanf("%s",str);
			printf("%s\n",str);
		}
	}
	return 0;
}
