#include<iostream>
using namespace std;

/*************************************************
c++ files can have extension as .cpp or .cc  
*************************************************/

class A
{
	public:
		int x;
		static int y; 
		A(int a,int b)
		{
			x=a;
			y=b;//This assignation is allowed only if the static variable is 1st defined outside the class
		}
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}
};

int A::y; //Default initial value for static variable is 0

int main()
{
	A a(10,50);
	a.display();
}
