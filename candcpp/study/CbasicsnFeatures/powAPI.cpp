#include<iostream>
using namespace std;
#include<math.h>

int main()
{
/*1
	int num =4;
	int fact =1;
	for(int i=num;i>0;i--)
	{
		fact=fact*i;
	}
	cout<<fact<<endl;
*/
	int base;
	int exponent;
	cout<<"Enter Base: ";
	cin>>base;
	cout<<"Enter Exponent: ";
	cin>>exponent;
	int res=1;
	for(int i=exponent;i>=1;i--)
	{
		res=res*base;
	}
        cout<<"Power func result is: "<<res<<endl;
        cout<<pow(base,exponent)<<endl; //pow() API
        return res; 
}
