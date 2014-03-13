#include<stdio.h>
int main()
{
	int score;
	int sum=0 ;//  sum 要注意初始化 不然是垃圾数据
	int i;
    int num;
	printf("统计多个人数的平均成绩\n");
	printf("请出入num数目（整数哦）\n");
   	scanf("%d",&num);
	for(i=0; i<num; i++)
	{
	printf("请出入第%d个成绩:",i+1);
   	if(scanf("%d",&score)!=1){
		printf("输入无效！\n");
		scanf("%*[^\n]%*c");
		--i;
		continue;   //  跳过循环体中剩余的内容
		}
		if(score<0||score>100){
		break;
		}
		sum += score;
	}
printf("平均成绩%g\n",(double)sum/i);
	return 0;
}

