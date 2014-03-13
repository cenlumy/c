#include<stdio.h>

typedef struct date{
	int year;
	int month;
	int day;
}date;

int datetoint(date d)
{
	return(d.year*10000+d.month*100+d.day);
}

date inttodate(int n)
{
	date d;
	d.year=n/10000;
	d.month=n/100%100;
	d.day=n%100;
	return d;

}


date input ()
{	date d;
	printf("d of function input:%p\n",&d);
	printf("please  input year month day\n");
	scanf("%d%d%d",&d.year,&d.month,&d.day);
	return d;
}
void print(date d)
{

	printf("%d-%d-%d\n",d.year,d.month,d.day);
	

}
int main()
{
	date d;
	printf(" d of function main:%p\n",&d);
    d=input()//"ddd",d);
	print(d);
	int n=datetoint(d);
	printf("%d\n",n);
	d=inttodate(n);
	print(d);

	return 0;
}
