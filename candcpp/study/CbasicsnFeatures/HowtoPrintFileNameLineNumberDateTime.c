#include<stdio.h>

/***************************************************
Preprocessor constants:
__FILE__
__LINE__
__DATE__
__TIME__
***************************************************/

int main()
{
        printf("%s\n",__FILE__); //prints the file name
        printf("%d\n",__LINE__); //prints the current line number
        printf("%s\n",__DATE__); //prints current date in MON DD YYYY
        printf("%s\n",__TIME__); //prints current time in hh:mm:ss
}


