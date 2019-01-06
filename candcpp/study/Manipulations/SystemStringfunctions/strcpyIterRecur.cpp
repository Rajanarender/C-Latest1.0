strcpy()
------------
**********************************
Iterative Method:
**********************************

Pointer Implementation:
=========================
void func(char *d, const char *s) //source string src should be made constant so that its value cannot be modified while copying
{
    while(*s)
    {
        *d++ = *s++;// Optimized code
        //*d =*s;
        //s++;
        //d++;
    }
    *d= '\0'; //V.V.Important step
}

Array Implementation:
=========================
void func(char d[], char s[])
{
    int i = 0;
    while(s[i])
    {
        d[i] = s[i];
        i++;
    }
    d[i]='\0';
}

int main()
{
    //const char *src ="GlobalEdge"; we cannot modify const
    char src[] ="GlobalEdge";
    char des[11]; //Should we specify the destination size b4 copying from source
    func(des,src);//Pass by Refernce,So no need to have Return type
    cout<<des<<endl;
}


**********************************
Recursive Method:
**********************************

Pointer Implementation:
=========================
void recurfunc(char *d,char *s)
{
        if(*s != '\0')
        {
                //*d++ = *s++;
                //recurfunc(d,s);
                *d = *s;
                recurfunc(d+1,s+1);// using d++,s++ will lead to segmentation fault
        }
        else
        {
                *d = '\0'; //V.V.Imp step
                return;
        }
}

int main()
{
        char src[] ="GlobalEdge";
        char des[11];
        recurfunc(des,src);
        cout<<des<<endl;
}



