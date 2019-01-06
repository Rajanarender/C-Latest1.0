#include<stdio.h>
#include<string.h>

char* func(char *x,int n)
{
        x = x+strlen(x)-1; //V.V.Imp step,making the ptr to point at the string end
	while(*x)
	{
               if(*x == n)
                return x;

		x--; //V.V.Imp step
	}
        return NULL;
}


int main()
{
	char x[]="Global Edge is a CMMI Levelp3 Company";
	//char *ptr = strrchr(x,'p');
        char *ptr=func(x,'p'); 
	printf("%s\n",ptr);
#if 0
	char x[]="Global Edge EdAge";
	char *ptr = strchr(x,'l'); //Should not use the source string directly
	printf("strchr(): %s\n",ptr);
        char *ptr1 = strchr(x,'E'); //Should not use the source string directly
	printf("strrchr(): %s\n",ptr1);

	char *ptr2=strstr(x,"al"); //Should not use the source string directly
	printf("strstr(): %s\n",ptr2);
	char *ptr3=strstr(x,"Ed"); //Should not use the source string directly
	printf("strrstr(): %s\n",ptr3);
#endif
}
