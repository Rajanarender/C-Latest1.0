#include<stdio.h>
#include<string.h>

//char* strstr(const char* string1,const char* string2);
//strstr returns the 1st occurrence of specified substring in the given string

char *func(char *m,char *n)
{
	while(*m && *n && *m == *n)
	{
             m++;
             n++;
	}
        if(*m==*n)
        {
           return m;
        }
        //else
        //return NULL; //If the character/alphabet is not found in the string, then return NULL
/*
	if(*m != '\0')
	{ 
		if(*m == n)
			return m;

		return func(m+1,n);
	}
	else
		return NULL;
*/
}

int main()
{
        char *m=strstr("Global aEdge","bal");
        printf("%s\n",m);// o/p: bal aEdge

        //char *n=strrstr("Global abalEdge","bal");
        //printf("%s\n",n);// o/p: balEdge

        char x[]="GlobalEdge is a good company";
        char y[]="Edge";
        char *k = func(x,y);
        printf("%s\n",k);
}


