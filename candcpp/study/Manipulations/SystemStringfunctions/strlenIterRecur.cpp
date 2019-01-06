strlen()
----------

Alternate way for Pointer Implementation:
=========================================
//1st Method:
int func(char *y)
{
    int count = 0;
    while(*y)
    {
        count++;
        y++;
    }
    return count;
}


Pointer Implementation: //Without using count variable
========================
int func(char *y)
{
    char *start =y;
    while (*y)
    {
        y++;
    }
    return (y-start); //Just subtract the addresses of 1st and last ptrs
}

Array Implementation:
=======================
int func(char y[])
{
    int i =0;
    while(y[i]) // (or) while (y[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char x[] ="Global Edge";
    cout<<func(x)<<endl;
}

**********************************
Recursive Method:
**********************************

Pointer Implementation:
=========================
int recurfunc(char *s)
{
       if(*s == '\0')
         return 0;

      return 1+recurfunc(s+1); //Should not use s++,it leads to segmentation fault ,V.V.Imp step
}

int main()
{
        char src[] ="GlobalEdge";
        cout<<recurfunc(src)<<endl;
}




