#include<iostream>
using namespace std;

int func(int *x,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
#if 1 //Using ptr format
		sum = sum+ *(x+i);
#endif

#if 0  //using array format,V.V.Imp
		sum=sum+x[i];
#endif
	}
	return sum;
}

int main()
{
	int x[]={5,6,7,9};
	cout<<"Sum of all elements in Array: "<<func(x,4)<<endl;
}
