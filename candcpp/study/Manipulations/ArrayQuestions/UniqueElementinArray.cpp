#include<iostream>
using namespace std;

int main()
{
        int x[]={2,3,3,2,4,6,7,1,7};
        int flag =0;

        for(int i=0;i<9;i++)
        {
                for(int j=0;j<9;j++)
                {
                        if(i==j)
                                continue; //V.V.Imp

                        if(x[i] ==x[j])
                        {
                                flag = 1;
                                break; //V.V.Imp
                        }
                        else //unique elements
                        {
                                flag =0;
                        }
                }
                if(flag ==0)
                {
                        cout<<"unique Elements in Array are: "<<x[i]<<endl;
                }
                else
                 {
                        cout<<"Duplicate Elements in Array are: "<<x[i]<<endl;
                 }
        }
}
