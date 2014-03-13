#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]="hello world!";
	printf("%d\n",sizeof("hello world!"));
	printf("%c\n","cenlumia"[2]);
	printf("%s\n","cenlumia"+3);
	strcpy(a,"good afternoon");
	puts(a);
	strcat(a, "dear friends!");
	puts(a);
	printf("%d,%d\n",sizeof(a),strlen(a));
	printf("%s\n",strchr(a,'f'));
//	printf("%s\n",strchr(a,'k'));  when to search k it jump to other place to find   and out of boundry
	printf("%s\n",strrchr(a,'f'));
	puts(strstr(a,"ear"));
	char b[]="hello";
	printf("%p, %p\n",b,"hello");
	if(strcmp(b,"hello")==0)
		printf("equal\n");
	else
		printf("not equal\n");
	//"hello"[0]=2   compile error  give read only setplace some value 

		return 0;
}
