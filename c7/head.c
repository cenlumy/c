#include <stdio.h>
#include<stdio.h>
#include<stdio.h>
#include"head.h"//此处的head.h只是定义而已。
#include"func.h"
#include"func.h"
#include"func.h"
#include"func.h"
#include"head.h"
#include "func.h"//func.h只含声明但是include了head里面的定义所以就会出现重新定义的窘境：
#ifndef VX
#define VX 1
int x=2;
#endif
#ifndef VX
#define VX
int x=3;
#endif
int main()
{
	s a;
}
