#include<iostream>
using namespace std;

#define func(x) (char*)(&x+1)-(char*)(&x)  //V.V.Imp

int main()
{
	int a;
#if 0 //With sizeof() operator
	cout<<sizeof(a)<<endl;
#endif 
	cout<<func(a)<<endl;
	char b;
	cout<<func(b)<<endl; //1byte
	short c;
	cout<<func(c)<<endl; //2bytes
	int k;
	cout<<func(k)<<endl; //4bytes
        long l;
	cout<<func(l)<<endl; //8bytes
	float d;
	cout<<func(d)<<endl; //4bytes
	double e;
	cout<<func(e)<<endl; //8bytes
}
