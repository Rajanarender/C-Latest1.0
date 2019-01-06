#include<iostream>
using namespace std;

class Base
{
	public:
		void func()
		{
			cout<<"In Base func\n";
		}
      
                virtual void v_func()
		{
			cout<<"In Base v_func\n";
		}
};

class Derived:public Base
{
	public:
		void func1()
		{
			cout<<"In Derived func1\n";
		}

                void v_func()
		{
			cout<<"In Derived v_func\n";
		}
};

int main()
{
        /* None of these work,since Base can access Derived class methods only if they are overridden/virtual */  
	//Derived *d;
        //Base *bptr=dynamic_cast<Base*>(d);//Upcasting
	//Base *bptr=new Derived(); //Dynamic Memory allocation
        //Base *bptr =&d; //pointing to derived object address
        //Base b =d;//Static
	//bptr->func1(); //Error,since func1() is not present in Base
      
	//d.func(); //Derived can access Base members since they are subset

/*
        Base *ptr=new Derived();
        ptr->func();
        ptr->v_func(); //1st Base ptr will check whether the func is virtual,
                       //2nd if it is overridden in Derived,it will call Derived func
                       //3rd if not overridden in Derived,it will call Base func only

        Derived d;//1st Derived will check whether that particular func is present within it
                  //if present, it will call Derived func only
                  //if not present, it will call Base func(including virtual func)
        d.v_func();
        d.func1();
        d.func();
*/
      //Derived *dptr = new Base(); //Error,Invalid conversion from Base to Derived
      //Derived *dptr=dynamic_cast<Derived*>(ptr);//Error,Invalid conversion from Base to Derived
      //Base b;
      //Derived *dptr=&b;//Error,Invalid conversion from Base to Derived
      //dptr->v_func(); //It calls Derived func only
}
