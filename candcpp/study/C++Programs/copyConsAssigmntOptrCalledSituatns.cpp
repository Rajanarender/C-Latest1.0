#include<iostream>
using namespace std;
/***************************************************
When is copy constructor called:
=> When new object is created from existing class object
A obj1,obj2(obj1); //obj2=obj1
=> When object is passed by value to a function
A obj;
func(obj); //void func(A a)
=>When object is returned by value by a function
A obj1=func(),obj2=obj1; //A func()

When Assignment operator is called:
=> When one existing object is assigned to the other existing object
=> When object is returned by value by a function
A obj;
obj = func(); //A func()
****************************************************/

class A
{
	public:
		int x;
		A()
		{
			cout<<"Default Constructor is called\n";
		}
		A(const A &obj)
		{
			cout<<"Default Copy Constructor is called\n";
		}
        
               A& operator =(const A &obj)
                {
			cout<<"Default Assignment Operator is called\n";
                }
};

A func()
{
        A ob; 
        ob.x = 100;
	return ob;
}

//void func1(A objt) this will call the copy constructor
void func1(A &objt) //reference object will avoid calling the copy constructor
{
	cout<<objt.x<<endl;
}

int main()
{
	A obj=func(),obj1=obj; //This calls copy constructor
        A obj2;
        obj2=func(); //This calls Assignment operator
	func1(obj); //This calls copy constructor
}



