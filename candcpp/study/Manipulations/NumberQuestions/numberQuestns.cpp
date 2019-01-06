#include<iostream>
using namespace std;

void EvenOddfunc(unsigned int num)//Only +ve Numbers
{
	if(num%2 == 0)
		cout<<"Even Number\n";
	else if (num%2 == 1)
		cout<<"Odd Number\n";
}

NOTE: //0,1 are neither prime nor composite
//2 is a Prime Number
void PrimeCompositefunc(unsigned int num)
{
	int count =0;

	for(int i=1;i<=num;i++) //V.V.Imp i value starts from 1,i=1,i<=num 
	{
		if(num%i == 0) //Successive reminder check
			count++;
	}

	if(count == 2) //V.V.Imp step,Count is 2, since any number can be divisible by 1 and itself
		cout<<"Prime Number\n";
	else if(count > 2)
		cout<<"Composite Number\n";
}

void Factorialfunc(unsigned int num)
{
	int fact = 1;
	for(int i=num;i>0;i--)
	{
		fact = fact*i;
	}
	cout<<"Factorial of "<<num<<" is: "<<fact<<endl; //In C++,format specifiers(%d,%f,etc) cannot be used
}

int Powerfunc(unsigned int base,int exponent)
{
	int res=1;
	for(int i=exponent;i>0;i--)
	{
		res=res*base;
	}
	return res;
}

int Sqrtfunc(unsigned int)
{


}

//It supports 3digited number only like 153,371
void ArmstrongNumber(unsigned int num)
{
        int x=num;
	int res=0;
	while(x > 0)
	{
		res = res + (x%10)*(x%10)*(x%10);
		x = x/10; //x get affected, num will remain same
	}

	if(res == num)
		cout<<"ArmstrongNumber\n";
	else
		cout<<"Not ArmstrongNumber\n";
}


void FibonacciSeries(unsigned int terms)
{
        int trm;
	cout<<"Enter the no. of terms:";
        cin>>trm;
	int x=0,y=1,next=0;
	for(int i=0;i<trm;i++)
	{
		if(i<=1)//if terms is 1,i=0, //if terms is 2, i =0,i=1
		{              
			next = i;
		}
		else
		{
			next=x+y;
			x=y;
			y=next;
		}
		cout<<"Fibonacci series is:"<<next<<endl;
	}
}

int main()
{

	int n;
	cout<<"enter a number\n";
	cin>>n;
/*
	EvenOddfunc(n);
 
	PrimeCompositefunc(n);
 
	Factorialfunc(n);
 
        int base,exponent;
        cout<<"enter base:";
        cin>>base;
        cout<<"enter exponent:";
        cin>>exponent;
	cout<<Powerfunc(base,exponent)<<endl;

        //cout<<Sqrtfunc(n);  
*/
        ArmstrongNumber(n);
        cout<<"Enter the No. of terms\n";      
        FibonacciSeries();
}
