#include<iostream>
using namespace std;

class Y
{
	public:
		int a;
		int func()
		{
			return a;
		}

};

class X
{
	public:
		class Y;

};

int main()
{
	X::Y obj;
	obj.a=100;
	cout<<obj.func()<<endl;

}
