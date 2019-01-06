#include<iostream>
using namespace std;
#include<string.h>

int main()
{
        const char *x="Global Edge is a MNC\nGlobal Edge is located in Tech Park\tTech Park is Good";
        char y[20][10]; //2d array with rows = Number of words[space+1]
        int row = 0; //rows
        int col = 0; //columns

#if 1
        while (*x)
	{
		//if(*x != ' ' || *x != '.' || *x != '\n' || *x != '\t') //NEVER USE THIS condition
		if(!(*x == ' ' || *x == '.' || *x == '\n' || *x == '\t')) //space characters
		{ 
			y[row][col]= *x; //Filling the 2d array
			col++; //increment columns
		}
		else
		{
			y[row][col]='\0'; //Completion of Each WORD
			col=0; //Reset columns to 0,V.V.Imp
			row++; //Increment rows
		}
		x++;
	}
#endif
#if 0 //We can write in this way, if the given word does not start with special characters
	while (*x)
	{
		if(isalpha(*x))
		{ 
			y[row][col]= *x; //Filling the 2d array
			col++; //increment columns
		}
		//if(*x ==' ' || *x == '.' || *x == '\n' || *x == '\t') //space characters
                else
		{
			y[row][col]='\0'; //Completion of Each WORD
			col=0; //Reset columns to 0,V.V.Imp
			row++; //Increment rows
		}

		x++;
	}
#endif
	y[row][col]='\0'; //Completion of Last WORD

	char z[20] ="Tech"; //This is the word which we want to check its frequency
	int count = 0;
	for(int a=0;a<=row;a++) //condition check with rows only
	{
		if( strcmp(y[a],z)==0 )
		{
			count++;
		}
	}
	cout<<"The Given Word is repeated: "<<count<<endl;
}


