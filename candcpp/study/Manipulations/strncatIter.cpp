strncat()
-----------

Pointer Implementation:
=========================
void func(char *d, const char *s,int bytes) //source string src should be made constant so that its value cannot  be modified while copying
{
    while(*d)
    {
        d++;
    }
    
    int k =0;
    while(*s && k < bytes)
    {
        *d++ = *s++;// Optimized code
        //*d =*s;
        //s++;
        //d++;
        k++;
    }
    *d ='\0'; //V.V.Important step
}

Array Implementation:
========================
void func(char d[], char s[],int bytes)
{
    int i =0,j=0;

    while(d[i])
    {
        i++;
    }

    int k =0;
    while(s[j] && k<bytes)
    {
        d[i] = s[j];
        i++;
        j++;
        k++;
    }
    d[i] ='\0';
}

int main()
{
    char src[]="Edge";
    char des[11] ="Global";//Should we specify the destination size b4 concating the source
    func(des,src,2);//Pass by Reference,So no need to have Return type
    cout<<des<<endl;
}
