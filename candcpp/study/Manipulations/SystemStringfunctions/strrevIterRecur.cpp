strrev()
----------

Pointer Implementation:
=========================
void swap(char*x, char*y)
{
    char temp =*x;
    *x = *y;
    *y =temp;
}

void func(char *str)
{
    char *start = str;
    char *end = str+strlen(str)-1; //strlen() is must, so that end ptr can point to the last index

    while(start<end) //compare start and end address
    {
        //swap(start,end); //We can use swap function (or) the below code
        char temp = *start;
        *start =*end;
        *end = temp;
        start++;
        end--;
    }
}

Array Implementation:
=======================
void func(char str[])
{
    int len = strlen(str);
    int i;
    for(i = 0; i < len/2 ; i++)
    {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

int main()
{
    char str[]="Global";
    func(str); //This is Pass By reference, So no Need of return type
    printf("%s\n",str);
}

