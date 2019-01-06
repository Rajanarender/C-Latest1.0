#include<stdio.h>
#include<string.h>

void func(int num,char *buf,int b)
{
	char* localbuf =buf;//Preserve the buf to localbuf,V.V.Imp step

	int rem=0;
	while(num>0)
	{
		rem = num%b;
		if(rem >=10 && rem <=15) //Hexadecimal format check
		{
			*buf = rem+55; //10+55 ='A',11+55 ='B',12+55 ='C',13+55 ='D',14+55 ='E',15+55 ='F'
			buf++;
		}
		else
		{
			*buf = rem +'0';//(Adding ASCII value)
			buf++;
		}
		num = num/b;
	}
	*buf = '\0'; //V.V.Important step

	buf= localbuf; //Now buf points to its Base Address,V.V.Imp step

#if 0 //Since this API doesnot work in this linux system, use the code below
	strrev(buf);    
#endif
	char *start =buf; //Reverse the base
	char *end=buf+strlen(buf)-1;
	while(start<end)
	{
		char temp = *start;
		*start=*end;
		*end=temp;

		start++;
		end--;
	}
}

int main()
{
	char buf[1024];
	//itoa(x,buf,24); // Convert integer to array or string
	func(172,buf,16); //base like 10,2,8,16
	printf("%s\n",buf);
}
