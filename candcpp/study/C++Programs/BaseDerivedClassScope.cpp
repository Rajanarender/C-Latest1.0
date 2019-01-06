#include<iostream>
using namespace std;

/*
class Base
{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
};

class Derived: public Base
{

};

int main() //Only public members/public inherited can be accessed here strictly
{
	Derived d;
	d.x=10; 
	d.y=11; //protected member
	d.z=12; //private member
}

*/

/*
Note: Base class ptr can access derived members only if thery are virtual members of base

class Base
{

};

class Derived : public Base
{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
};

int main() //Only public members/public inherited can be accessed here strictly
{
	Base *ptr = new Derived(); //Base ptr can access Derived only through virtual 
	ptr->x=10; 
        ptr->y=11; //protected member
	ptr->z=12; //private member
}
*/


class Base
{
public:
	virtual void func() //Base virtual function should be public always
	{
		cout<<"Im in Base\n";
	}

};

class Derived : public Base //Inheritance should be public always
{
	private: 
		void func() //Derived virtual function can be either public/protected/private
		{
			cout<<"Im in Derived\n";
		}
};

int main() //Only public members/public inherited can be accessed here strictly
{
	Base *ptr = new Derived(); //Base ptr can access Derived only through virtual 
        ptr->func();
}






