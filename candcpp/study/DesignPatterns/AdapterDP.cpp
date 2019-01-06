#include <iostream>
#include <string>
using namespace std;

/*********************************************
Adapter Design Pattern:
Adapter class inherited from only Target[public]

=>Converting the interface of a class to other interface which the client(main() function) want

Here incompatiable interfaces are Target,Adaptee
They work together with the help of Adapter class
NOTE: client(main()) interacts only with the Target class

Adapter makes classes of different interfaces to work together
class Target
class Adaptee
class Adapter:: public Target
*********************************************/

class Target //interface class
{
	public:
		virtual void display() = 0;
};

class Adaptee
{
	public:
		void func() 
		{
			cout<<"Target interacts with Adaptee using Adapater"<<endl; 
		}
};

class Adapter : public Target
{
	public:
#if 0
		Adaptee &obj;
	public:
		Adapter(Adaptee &a) : obj(a) //Initializer list mandatory for reference
	{
	}
#endif
		Adaptee *x;
		Adapter( Adaptee *a)
		{
			x=a;
		}
		void display()
		{
			x->func();
		}
};

int main()
{
#if 0 //We can use this also
        Adaptee *Ad = new Adaptee;
        Target *t = new Adapter(Ad);
#endif

	Target *t =new Adapter(new Adaptee);
	t->display();
	return 0;
}
