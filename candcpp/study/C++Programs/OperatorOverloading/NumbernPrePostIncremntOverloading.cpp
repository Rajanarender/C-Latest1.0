#include<iostream>
using namespace std;

/*************************************
X& operator++() //++obj
{
++i; // i is class member
}

X& operator++(int dummy) //obj++
{
i++;// i is class member
}
*************************************/

class X
{
	int i;
	public:
	X():i(0)
	{}

	X(int a):i(a)
	{}

	X& operator+(const X &obj)
	{
		if(this != &obj)
		{
			//this->i = this->i + obj.i; // object x gets affected
			X *temp;
			temp->i = this->i+obj.i; //object x remains the same
			return *temp; //Should be within the block, or else goes out of scope
		}
		//return *this;
	}

	void display()
	{
		cout<<i<<endl;
	}
};

int main()
{
	X x(2),y(4),z;
        z=x+y;
	x.display();
	y.display();
	z.display();
	return 0;
}

/***************************************************
Pre-increment & Post-increment Operator Overloading
****************************************************/
/*
class X
{
	int i;
	public:
	X():i(0)
	{}

	X(int a):i(a)
	{}

	X& operator++() //Pre-increment operator overloading
	{
		++i;
		return *this;
	}

        //X& operator++(int)
	X& operator++(int dummy) //Post-increment operator overloading, 
                                 //one argument of int type should be passed mandatorily
	{
		i++;
		return *this;
	}

	void display()
	{
		cout<<i<<endl;
	}
};

int main()
{
	X x(4),y(9);
	++x;//Pre-increment
	x.display();
        y++;//Post-increment
        y.display();
	return 0;
}

*/

