#include<iostream>
using namespace std;

/*
strcpy,strcat,strcmp,strlen,strrev,strchr,strstr
strpalindrome
*/
/*
int func(char *x)
{
        char *start = x;
	while(*x)
	{
		x++;
	}
      return x-start;
}
*/

int count = 0;
int func(char *x)
{
        count++;
	if(*x == '\0')
		return 0;

	return func(x++);

}

int main()
{
	char x[] = "Raja";
	func(x);
        cout<<count;
}
