#include<iostream>
using namespace std;

int main()
{
char x[]={1,2,3};
cout<<x[1]<<endl;
cout<<*(x+1)<<endl;

char m[][2]={{1,2},{3,4}};
cout<<m[1][2]<<endl;
cout<<*(m[1]+2)<<endl;
cout<<*((*m+1)+2)<<endl;

}
