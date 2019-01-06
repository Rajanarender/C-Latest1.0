#if 0
volatile:
This keyword tells the compiler not to optimize the code since they get affected by the outside code/external Hardware 
Generally the variables are accessed from cache
when we use volatile,the variables are accessed from their address directly,helps in faster access of the variables
Global variables used in ISR[Interrupt Service Routines] get affected, so we should use volatile to avoid it
Global variables used in Multithreaded applications get affected, so we should use volatile to avoid it
#endif

syntax:
volatile int x;

#include<iostream>
using namespace std;

int main()
{
	volatile int x= true;
#if 0
        while(1)
        {
	if(x)
		cout<<"Global\n";
	else
		cout<<"Edge\n";
        }
#endif 
}
