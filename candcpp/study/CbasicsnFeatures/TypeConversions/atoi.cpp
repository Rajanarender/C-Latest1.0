#include<iostream>
using namespace std;


int func(char x[])
{
	int res = 0;
	for(int i=0;x[i] !='\0';i++)
	{
		res=res*10+x[i]-'0';
	}
return res;
}

int main()
{
	char x[]="1234";
	cout<<func(x)<<endl;
}



Example:
i/p: 123.456.78.9
o/p:123456789

int func(char x[])
{
	int res=0;
	for(int i=0;x[i] !='\0';i++)
	{
		if(x[i] == '.')
			continue;

		res=res*10+x[i]-'0';
	}
	return res;
}

int main()
{
	char x[]="123.456.78.9";
	cout<<func(x)<<endl;
}
