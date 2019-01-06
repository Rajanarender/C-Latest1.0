#include<iostream>
using namespace std;

//We can do this using flags

int main()
{
#if 0 //Array Implemenation
        char x[]="Pranay";
        char y[]="Vinay";
        //bool flag =false; //if k=1 => flag=true, if k=0 => flag=false
        int flag =false;
        for(int i=0;x[i] !='\0';i++)
        {
                for(int j=0;y[j] !='\0';j++)
                {
                        if(x[i]==y[j])
                        {
                                flag=true;
                                break;//V.V.Imp step
                        }
                        else //V.V.Imp,flag has to be reset when characters are not same
                        {
                                flag=false;
                        }
                }
                if(flag == false) //For unique[not same] characters
                {
                        cout<<x[i]<<endl;
                }
#if 0
                if(flag == true) //For same characters
                {
                        cout<<x[i]<<endl;
                }
#endif
        }
#endif

#if 1
        const char*x="PranDay";
        const char*y="Vinay";
        const char*z=y; //Preserve base address into other ptr
        int flag= false;

        while(*x)
        {
                while(*y)
                {
                        if(*x == *y)
                        {
                                flag= true;
                                break; //V.V.Imp,atleast one set of characters are equal is enough,so break
                        }
                        else //V.V.Imp,flag has to be reset when characters are not same
                        {
                                flag= false;
                        }

                        y++;
                }
                y=z; //V.V.Imp step,Redirect ptr to base address

                if(flag == false) //For unique[not same] characters
                {
                        cout<<*x<<endl;
                }
#if 0
                if(flag == 0) //For same characters
                {
                        cout<<*x<<endl;
                }
#endif
                x++;
        }
#endif
}

