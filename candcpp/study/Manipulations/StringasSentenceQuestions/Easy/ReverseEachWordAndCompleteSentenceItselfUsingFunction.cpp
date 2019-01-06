#include<iostream>
using namespace std;
#include<string.h>

/******************************************************************************
We need 2 local pointers for getting Each word till space and End of sentence
******************************************************************************/

void reverse(char *start,char *end)
{
        while(start < end) //V.V.Imp step
        {
                char temp = *start;
                *start = *end;
                *end = temp;
                 start++; //for traversing,Imp step
                 end--; //For traversing.Imp step
        }
}

#if 0 //For reversing each individual word in the sentence
void func(char *x)
{
        char *start =x;
        char *temp=x;
        while(*temp)
        {
                if(*temp == ' ')
                {
                        reverse(start,temp-1);
                        start=temp+1; //Update the word ptr by changing its address
                }

                temp++;
        }
        //if(*temp == '\0') //Condition is not necessary,since *y is NULL obviously after while loop
        //{
                reverse(start,temp-1); //O/p: labolG egdE si a CNM
        //}

}
#endif

#if 1 //For reversing complete sentence
void func(char *x)
{
        char *start =x;
        char *temp=x;
        while(*temp)
        {
                if(*temp == ' ')
                {
                        reverse(start,temp-1);
                        start=temp+1; //Update the word ptr by changing its address
                }

                temp++;
        }
        //if(*temp == '\0') //Condition is not necessary,since *y is NULL obviously after while loop
        //{
                reverse(start,temp-1); //O/p: labolG egdE si a CNM
                reverse(x,temp-1); //O/p: MNC a is Edge Global
        //}

}

int main()
{
        char x[]="Global Edge is a MNC";
        func(x);
        cout<<x<<endl;
}
#endif


