#include<iostream>
using namespace std;
#include<thread> //for C++ thread
#include<mutex> //for C++ mutex
#include<condition_variable> //for condition variables

/*
FYI: 
g++ -std=c++11 filename.cpp -pthread[C++11 ]

g++ filename.cpp -lpthread[C++ posix thread]
*/

mutex mobj; //mutex class
condition_variable cvobj; //condition variable class

void func()
{
	mobj.lock();
        //cvobj.wait();
	cout<<"In func()"<<endl;
        cvobj.notify_one(); //signal onlt one thread
        //cvobj.notify_all();//signal all threads
	mobj.unlock();
}

/*
auto func = []() //lamda expression
{
	cout<<"In func() with parameter"<<x<<endl;
};
*/

int main()
{
	thread obj(func); //thread class
	cout<<obj.get_id()<<endl;
	obj.detach();
	if(obj.joinable() == 0)
	{
		cout<<"Since threads are joinable,we will detach them"<<endl;
	       //obj.detach();
	}
}
