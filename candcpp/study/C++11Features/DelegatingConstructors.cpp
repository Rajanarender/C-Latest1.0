#include<iostream>
using namespace std;

/******************************************************************************
Delegating constructors:
Constructor to constructor call within the same class
Default to Parameterised and vice-versa.

FYI: We generally call Base class constructors using Derived class constructors
******************************************************************************/

class X
{
	public:
		X():X("Global",1) //Calling Parameterised cons from Default cons
	        {
		cout<<"In Default Constructor\n";
	        } 

		X(string str,int data) 		
                {
			cout<<"In Parameterised Constructor\n";
			cout<<str<<" "<<data<<endl;
		}
};

int main()
{
	X obj;
}

/*
class X
{
	public:
		X()
	        {
		cout<<"In Default Constructor\n";
	        }

		X(string str,int data):X() //Calling Default cons from Parameterised cons
		{
			cout<<"In Parameterised Constructor\n";
			cout<<str<<" "<<data<<endl;
		}
};

int main()
{
	X obj("Global",1);
}
*/




