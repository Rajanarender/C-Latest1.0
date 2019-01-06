#include<iostream>
using namespace std;

#define M 2
#define N 3
#define A 3
#define B 1

int main()
{
#if 0 //User input
        int x[2][3];
        cout<<"Enter the Matrix Elements: ";

        for(int i =0;i<2;i++)
        {
                for(int j=0;j<3;j++)
                {
                        cin>>x[i][j];
                }
        }
#endif

        int x[M][N]={{1,2,3},
                {4,5,6}
        }; //2x3

        int y[A][B]={{1},
                {2},
                {3}
        }; //3x1

        int m[M][B]; //2x1
        int sum = 0;

        if(N == A) //V.V.Imp condition
        {
                for(int i=0;i<M;i++)
                {
                        for(int j=0;j<B;j++)
                        {
                                for(int k=0;k<N;k++) //k<A
                                {
                                        sum=sum+(x[i][k]*y[k][j]);
                                }
                                m[i][j]=sum;
                                sum=0; //reset the sum
                        }
                }
        }
        else
        {
                cout<<"We cannot multiply this 2 Matrices\n";

        }
        for(int i=0;i<2;i++)
        {
                for(int j=0;j<1;j++)
                {
                        cout<<m[i][j];
                }
                cout<<endl;
        }
}


