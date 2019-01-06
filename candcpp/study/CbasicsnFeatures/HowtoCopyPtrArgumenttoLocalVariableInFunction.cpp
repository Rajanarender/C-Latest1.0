#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* func(const char* data)
{
	char *temp=(char*)malloc(sizeof(char)*(strlen(data)+1)  );
        printf("%lu,%d",sizeof(temp),strlen(temp));       
 	strcpy(temp,data);
	return temp;
}

int main()
{
	printf("%s\n",func("Global"));
	char *s=func("Global");
}



