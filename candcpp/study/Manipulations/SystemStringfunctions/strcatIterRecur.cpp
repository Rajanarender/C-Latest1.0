/*******************
strcat()
*******************/

Pointer Implementation:
=========================
void func(char *d, const char *s) //source string src should be made constant so that its value cannot  be modified while copying
{
    while(*d)
    {
        d++;
    }
    while(*s)
    {
        *d++ = *s++;// Optimized code
        //*d =*s;
        //s++;
        //d++;
    }
    *d ='\0'; //V.V.Important step
}

Array Implementation:
========================
void func(char d[], char s[])
{
    int i =0,j=0;

    while(d[i])
    {
        i++;
    }
    while(s[j])
    {
        d[i] = s[j];
        i++;
        j++;
    }
    d[i] ='\0';
}

**********************************
Recursive Method:
**********************************

Pointer Implementation:
=========================
void func(char *d, char *s)
{
        if(*d != '\0')
        {
                func(d+1,s);
        }
        else
        {
                if(*s == '\0') //V.V.Imp
                {
                        *d = '\0';
                        return; //V.V.Imp
                }
                *d=*s;
                func(d+1,s+1);
        }
}

int main()
{
    char src[]="Edge";
    char des[11] ="Global";//Should we specify the destination size b4 concating the source
    func(des,src);//Pass by Reference,So no need to have Return type
    cout<<des<<endl;
}
