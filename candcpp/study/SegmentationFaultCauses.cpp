#if 0
Segmentation Fault:
This occurs when we try to acces the readable memory
Memory access violation
Run time Error
How to identify it?
Segmenation fault(core dumped)

Reasons:
=>Try to Access/dereference NULL ptr,wild ptr,dangling ptr
=>Recursive func calls
=>Array index out of boundaries

Use Debugger like gdb to resolve it

gdb steps:
gdb a.out core  //to keep the code in gdb/debugging mode
run               //Now run the code
bt                //to find the callstack 
c

#endif

//In the below cases we get segmentation fault since 0,1,'A' dont have address 
//This means ptr is pointing to invalid address ,This ptr is a wild ptr
//Dereferencing wild ptr leads to segmenation fault

#include<iostream>
using namespace std;

int main()
{
        //int *x;//Run time Error(Segmentation fault)
        //int *x = 0; //Only Run time Error(Segmentation fault),No compile time Error for Type conversion,V.V.Imp
	//int *x =(int*)0; //Run time Error(Segmentation fault)
        //int *x = reinterpret_cast<int*>(0); //Run time Error(Segmentation fault)

        //int *x = 1; //Compile time Error( Invalid conversion from int to int*), V.V.Imp
	//int *x =(int*)1; //Run time Error(Segmentation fault)
         
        //char *x;//Run time Error(Segmentation fault)
        //char *x = 'A'; //Compile time Error( Invalid conversion from char to char*), V.V.Imp
	//char *x =(char*)'A'; //Run time Error(Segmentation fault) => both x,*x
 
        //char *x = "Global"; //WARNING: time Error( Deprecated conversion from string const to char*), V.V.Imp
        //const char *x = "Global"; //Works fine, cout<<*x; //G[Base address value], cout<<x; //Global, V.V.Imp

        //const int *x=(int*)"Global"; //cout<<x; //some address, cout<<*x; //Some value 
        //int *x=(int*)'G'; //cout<<x; //some Address, cout<<*x; //Segmentation fault

#if 0
	int k = 0;
	int *x = &k;
#endif
	cout<<"Address is:"<<x<<endl;// only for char *x = (char*)'A' leads to Segmentation fault 
	cout<<"Value is:"<<*x<<endl; //All above cases leads to Segmentation fault
 
}













