#include<iostream>
using namespace std;

class A
{
        int x;
	public:
		A()
		{
			cout<<"A constructor is called\n";
		}
};

class B:virtual public A
{
	public:
	B()
	{
		cout<<"B constructor is called\n";
	}
};

class C:virtual public A
{
	public:
	C()
	{
		cout<<"C constructor is called\n";
	}

};

class D:public B,public C //Constructors calling sequence will follow only inheritance n not Initializer list 
{
	public:
	D()//This sequence is followed only if inheritance is not mentioned 
	{
		cout<<"D constructor is called\n";
	}
};

int main()
{
	//D d;
	cout<<"Size of class D is :"<<sizeof(D)<<endl;
}
