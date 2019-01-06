#include<iostream>
using namespace std;

bool IsPalindromeCheck(char *begin,char *end)
{
       //char *palinstrt = begin;
       //char *palinend = end;
	while(begin<=end) //address check
	{
		if(*begin != *end) //Value check
		{
			cout<<"Not a Palindrome"<<endl;
			return false; 
		}
		begin++;
		end--;
	}
	cout<<"A Palindrome"<<endl;
        return true;
}

void func(char *x)
{
	char *start=x;
        char *temp =x;
        static int count=0;
	while(*temp)
	{
		if( *temp == ' ')
		{
			if(IsPalindromeCheck(start,temp-1) == true)
				count++;

			start = temp+1;
		}
		temp++;
	}
	if(IsPalindromeCheck(start,temp-1) == true)
		count++;

        cout<<"Number of Palindromes in the sentence is: "<<count<<endl;
}

int main()
{
	char x[]="LIRIL MADAM BAAB";
	func(x);

}
