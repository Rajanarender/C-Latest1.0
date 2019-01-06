#include<iostream>
using namespace std;

namespace Global
{
	int x=1;
}

int main()
{
	//Global::x=1; 
	cout<<Global::x<<endl; //Compilation Error, if we dont use ::
}




