#include<stdio.h>
int main()
{	
	int score;
	int n=0;//  n显然不要在do里面赋值不然每次循环会充/            //分赋值 
	do{
	printf("第%d次考试……完毕，输入成绩：\n",++n);
	if(scanf("%d",&score)==1)
	{	
	printf("score:%d\n",score);
	}
	else
	{
	printf("invalid input:\n");
	}
	scanf("%*[^\n]%*c");//  清除缓冲区剩余的字符
	}while(score<60);   //每输入一次就执行一次
	if(score>100){
	printf("unblible,you are crazy dog");
	}
	else
	printf("恭喜你通过考试\n");	
	return 0;
}
