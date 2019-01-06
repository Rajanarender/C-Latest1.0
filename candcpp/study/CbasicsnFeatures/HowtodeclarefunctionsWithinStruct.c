#include<stdio.h>
//#include<iostream>
//using namespace std;

/*
typedef struct _X
{
	int *ptr;
	int (*fptr)(int);
}X;

int func(int m)
{
	return m*m;
}


int main()
{
	X obj;
	int k =10;
	obj.ptr = &k;
	obj.fptr=func;
	printf("%d\n",obj.fptr(5));
}

*/

int func(int m)
{
return m;
}

int main()
{
//int (*fptr)(int )=func; //func holds the address implicitly
int (*fptr)(int x);
fptr = func;
printf("%d , %d\n",(*fptr)(5),fptr(5));
}


