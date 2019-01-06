#include<iostream>
using namespace std;


int func()
{
	int m =10;
	return m;
}

int main()
{
	static int x = 10;
	int m=10;
	static int y=m;
	static int z=func();
	cout<<x<<" "<<y<<" "<<z<<" "<<endl;
}
