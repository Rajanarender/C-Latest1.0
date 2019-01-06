#include<iostream>
using namespace std;

/******************************************************
Identity Matrix:
=>Diagonal Elements value is 1
=>Remaining Elements value is 0
Examples:
int x[1][1] ={1};
int x[2][2] ={{1,0},
              {0,1} };

int x[3][3] ={{1,0,0},
              {0,1,0}
              {0,0,1} };
******************************************************/

int main()
{
int x[2][2] ={{1,0},
              {0,1} };

bool flag = false;
for(int i=0;i<2;i++)
{
        for(int j=0;j<2;j++)
        {
                if(i==j && x[i][j] !=1)
                {
                        flag = true;
                        break;
                }
                else if( i !=j && x[i][j] != 0)
                {
                        flag=true;
                        break;
                }
        }
}

if(flag == false)
{
        cout<<"Given Matrix is Identity Matrix\n";
}
else
{
        cout<<"Given Matrix is Not Identity Matrix\n";
}

}
