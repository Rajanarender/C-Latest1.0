#include<iostream>
using namespace std;

/************************************************************
If we want to pass a function as parameter to other function,
we need function ptr.
*************************************************************/

int func( int x)
{
	return x;
}

void get(int (*func)(int x)) //This is function ptr used in definition
{
	int y = func(10);
	cout<<y<<endl;
}

int main()
{
	get(func); //Here only function name should be passed
}



int f1(int x)
{
return x;
}

int (*func)(int a) = f1;
cout<<func(10);

int (*func)(int a) = &f1;
cout<<(*func)(10);

int (*func)();
func = f1;
cout<<func();

int (*func)();
func = &f1;
cout<<(*func)();





