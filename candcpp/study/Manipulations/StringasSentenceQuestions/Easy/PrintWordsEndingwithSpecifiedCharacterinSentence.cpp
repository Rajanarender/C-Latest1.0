#include<iostream>
using namespace std;

void wordfunc(char *w,char *begin,char *end)
{
        while(begin<=end) //<= is Imp
        {
                *w++ = *begin++;
        }
        *w='\0'; //V.V.Imp
}

void func(char *x)
{
        char ch;
        cout<<"Enter Ending character of a Word from the sentence\n";
        cin>>ch;

        char *temp=x;
        char *wordstart=x;
        char word[11]; //Buffer to hold the Word[Word ending with specified character]
        while(*temp)
        {
                if(*temp == ' ') //Space character
                {
                        if( *(temp-1) == ch ) //Ending character check
                        {
                                wordfunc(word,wordstart ,temp-1);//V.V.Imp
                                cout<<word<<endl;
                        }
                        wordstart=temp+1;
                }

                temp++;
        }
        //if(*temp=='\0' && *(temp-1) == ch) //NULL character and Ending character check,No need of this condition
        if(*(temp-1) == ch) //Ending character check is enough,since temp is NULL here
        {
                wordfunc(word,wordstart ,temp-1);
                cout<<word<<endl;
        }
}

int main()
{
        char x[] ="All Globalites Indians are Experts";
        func(x);
}

