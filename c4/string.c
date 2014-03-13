#include<stdio.h>

int main()
{
	char a[4]={'A','B','C','D'};//a是个字符数组但不是字符串
	printf("%s\n",a);//可能会在ABCD之后出现乱码
	char s[7]={'f','u','c','k','\0','d'};
	printf("%s\n",s);
	printf("%s\n",s+2);
	printf("%s\n",s+5);
	char str[800];
	printf("Please enter a char:");
	scanf("%s",str);
	printf("%s\n",str);
	printf("Please enter a line of characters:\n");
	scanf("%*[^\n]%*c");
	gets(str);
	printf("%s\n",str);
	return 0;
}
