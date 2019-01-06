
/***************************************************************
Stack using Array
Stack using class
Stack using Single Linked list[nothing but ptr]
Stack using Queues
STL vector container class = Dynamic Array+Stack[push_back,pop_back]
*****************************************************************/

/********************************************
Stack implementation using Array,Class
********************************************/

#include<iostream>
using namespace std;

#define MAX 3 

class Stack
{
	int top;
	int st[MAX];

	public:
	Stack()
	{
		top = -1;
	}

	void push(int x) //It is like set function
                         //In STL, this is push_back()
	{
		if(top >= MAX-1) //since top starts from 0th INDEX
		{
			cout<<"Stack Overflow\n";
		}

		st[++top] = x; //pre-increment top as ++top,to make top = 0

# if 0 //we can write like this also
		top++;
		st[top] = x;
#endif
	}

	int pop() //It is like get function
                  //V.V.Imp. In STL, this is pop_back(), pop_back() erases the element but does not return it
	{
		if(top <= -1)
		{
			cout<<"Stack Underflow\n";
		}
		return st[top--]; //post-decrement top,since we need the last value also

#if 0 //we can write like this also
		top--;
		return st[top];
#endif
	}
};

int main()
{
	Stack s;
	s.push(2);
	s.push(4);
        s.push(3);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
}

/********************************************
Stack implementation using Single Linked List
********************************************/

struct node
{
	int data;
	struct node *next;
};

void push(struct node *top, int newdata)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode == NULL) //Running out of memory
        {
         printf("Stack Overflow\n");
        }

	newnode->data = newdata;
	if(top != NULL)
	{
		newnode->next = top;
	}
	top = newnode;
}

int pop(struct node *top)
{
        if(top== NULL)
        {
         printf("Stack Underflow\n");
        }

	struct node *temp = top;
	top = top->next; //Preserve the top
        int x = temp->data; //Preserve the temp->data before freeing the temp
	temp->next = NULL; //V.V.Imp step
	free(temp);
        return x;
}

int main()
{
	struct node *top = NULL;
	push(top,5);
	push(top,7);
	cout<<pop(top);
	cout<<pop(top);
}






