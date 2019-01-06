#include <iostream>
#include <vector>
#include <algorithm> //for find(),since vector does not have find() member
using namespace std;

/***********************************************
This comes under Behavioral Pattern
Ex:
Airtel company - Subject
Subscribers - Observers

NOTE: Instead of Register,UnRegister functions use Attach,Detach functions
************************************************/

//Interface
class observer   // base class
{
	public:
		virtual void update()=0;
};

class HRDept : public observer
{
	public:
		void update()
		{
			cout<<"Notified to HRDept"<<endl;  // implementation of derived class HRDept
		}
};

class Finance : public observer
{
	public:
		void update()
		{
			cout<<"Notified to Finance"<<endl; // implementation of derived class Finance
		}
};

class Subject
{
	public:
		vector<observer*> v;
		vector<observer*> ::iterator it;

		void Register(observer *newobserver) //function to subscribe or register/attach to Subject
		{
			v.push_back(newobserver);
		}

		void unRegister(observer *observer) //Erasing/Deleting/Detach that observer
		{
#if 0 //C++11
			auto it =find(v.begin(),v.end(),observer);
#endif
			it =find(v.begin(),v.end(),observer); //find is non-member of vector class,so include algorithm header
			if(it != v.end()) //Observer present already
			{
				v.erase(it);
				delete observer; //V.V.Imp step
			}
		}

		void notifyAll() // notifying to all subscribers who has registered(subscribed) to Subject
		{
#if 0 //C++11
			for( auto elem : v) //C++11
			{
				elem->update();
			}
#endif      

#if 1
			for(int i =0;i<v.size();i++)
			{
				v[i]->update(); //update() should be public in Observer class,V.V.Imp step
			}
#endif

#if 0 //This does not work,so do not use it
			for(it =v.begin();it !=v.end();it++) //begin(),end() are functions
			{
				it->update();
			}
#endif
		}

		void modifyEName(string oldname, string newname)
		{
			cout<<"Emp name is changed from "<<oldname<<" to "<<newname<<endl;
			notifyAll(); //This will call the above function
		}
};

int main()
{
	// STEP1 : Initialization
	HRDept *hr = new HRDept();
	Finance *f = new Finance();

	Subject *bptr;
	bptr = new Subject();

#if 0 //Error,should not use register(), r[lower case] should not be used as register is keyword in C,C++,V.V.Imp  
	bptr->register(hr);
	bptr->register(f);
#endif
	//registering or subscribing to Subject
	bptr->Register(hr);
	bptr->Register(f);

	bptr->modifyEName("Praveen","Nanu");
	bptr->unRegister(hr);
	return 0;
}

