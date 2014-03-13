#include<stdio.h>
int main()
{
	double money;
	printf("从家里拿了多少钱：\n");
	scanf("%lf",&money);
	while(money>=10){
		puts("exchange ten game coins ");
		money -= 10;
		puts("play game game over");
}
	printf("钱花完 哈哈不够咯 ,不花完不死心啊\n");
	return 0;
}
