#include<stdio.h>
/**************************************
main() function can do both Iterative and recursive
**************************************/

int main()
{
	static int var=5;
	if(--var>0)
	{
		printf("%d\n",var);
	}
	if(var!=0)
		main();

}
