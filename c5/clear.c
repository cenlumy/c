#include<stdio.h>
void clear();
nt main()
{
	char name[20];
	char gender;
	printf("please enter your name:");
	scanf("%s",name);
	clear();
	printf("please enter your gender:");
	scanf(" %c", &gender);
	printf("%s:%c\n",name,gender);
	return 0;
}
void clear()
{
	scanf("%*[^\n]");
	scanf("%*c");
}
