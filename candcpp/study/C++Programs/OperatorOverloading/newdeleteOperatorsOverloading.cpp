#include<iostream>
using namespace std;
#include<stdlib.h> //malloc,free

/****************************************************************
new operator syntax:
void* operator new(size_t size);

delete operator syntax:
void operator delete(void* x);
****************************************************************/

class Test
{
	int x;

	public:
	Test()
	{
		cout<< "Default constructor is called\n";
                x=0;
	}

	Test(int a)
	{
		cout<< "Parameterised constructor is called\n";
		x=a;
	}

	void* operator new(size_t size) //size is the no. of bytes allocated
	{
		//void *p = ::new Test(); //This is wrong
		void *p = malloc(size); //V.V.Imp step,since malloc returns void* no need of typecasting
		return p;
	}

	void operator delete(void *q)
	{
		free(q); //V.V.Imp step
	}

	void display()
	{
		cout<<x<<endl;
	}
};

int main()
{
#if 1 //This allocates memory using new operator overloading and then calls Default Constructor Explicitly

	//Test *obj = new Test; 
                (or)
	Test *obj = new Test(); 
#endif

#if 0 //This allocates memory for 100 bytes using new operator overloading and then calls Parameterised Constructor Explicitly

	Test *obj = new Test(100); 
#endif
	obj->display();
	delete obj;
}

