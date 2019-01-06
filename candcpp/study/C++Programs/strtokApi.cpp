#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	char x[]="Global Edge is a MNC\n.It has good amenities\t,It more client locations.";
	char dlmt[]=" \n\t,."; //Delimiter, Write all special letters,etc within double quotes
	char *token = strtok(x,dlmt);
	while(token)
	{
                cout<<token<<endl; 
		token=strtok(NULL,dlmt);
	}
}
