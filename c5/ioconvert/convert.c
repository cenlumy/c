#include<stdio.h>
char toUpper(char c)
{
	return (c-'a'+'A');
}
char* toChinese(char c)  //此处只是带回字符数组的地址
{
	char num[10][5]={"零","一","二","三","四","五","六","七","八","九"};
printf("%s",(num[c-'0']));//  因为这个num定义的是局部变量所以不
	return 0;
}     //  所以一返回的话马上局部变量在进行完的时候马上消失

