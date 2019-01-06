#include<stdio.h>

/***************************************************
func declaration __attribute__ ((constructor));
func declaration __attribute__ ((destructor));
***************************************************/

void func11(void) __attribute__ ((constructor(101))); //Gets called before main()
void func11(void)
{
	printf("In func11\n");
}

void func1(void) __attribute__ ((constructor)); //Gets called before main()
void func1(void)
{
	printf("In func1\n");
}

void func2(void) __attribute__ ((destructor)); //Gets called after main()
void func2(void)
{
	printf("In func2\n");
}

int main()
{
	printf("In main()\n");
}



