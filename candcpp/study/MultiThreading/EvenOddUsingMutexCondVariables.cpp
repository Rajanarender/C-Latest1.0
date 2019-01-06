#include<iostream>
using namespace std;
#include<pthread.h> //Thread,mutex

//Even Odd Threads Implementation
//Thread 1 prints Even no's 2,4,6,8,10
//Thread 2 prints Odd no's 1,3,5,7,9

//To compile pthread included cpp file then
//g++ filename.cpp -lpthread

pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t c;
int x=1; //Global variable,if u want 0 then make x=0

void* evenFunc(void* msg)
{
	pthread_mutex_lock(&m); //mutex lock should be done before while condition,V.V.Imp step
	while(x<=10)
	{
		if(x%2==0)
		{
			pthread_cond_wait(&c,&m); //Condition variable inside if condition,V.V.Imp
			cout<<"t1=>Thread id:"<<(int)pthread_self()<<" value:"<<x<<endl;
			x++; //x++ should be done inside if condition only,V.V.Imp step
		}
		pthread_mutex_unlock(&m); //mutex unlock should be done,outside if condition,V.V.Imp step
		pthread_cond_signal(&c);
	}
}

void* oddFunc(void* msg)
{
	pthread_mutex_lock(&m);
	while(x<=10)
	{
		if(x%2==1)
		{
			pthread_cond_wait(&c,&m);
			cout<<"t2=>Thread id:"<<(int)pthread_self()<<" value:"<<x<<endl;
			x++;
		}
		pthread_mutex_unlock(&m);
		pthread_cond_signal(&c);
	}
}

int main()
{
	pthread_t t1,t2;
	pthread_create(&t1,NULL,evenFunc,NULL);//Pass by reference
	pthread_create(&t2,NULL,oddFunc,NULL);
	pthread_join(t1,NULL); //it is pass by value with 2nd Argument,V.V.Imp
	pthread_join(t2,NULL);//V.V.Imp, threads should be joined always 
	return 0;
}



