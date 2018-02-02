//manipulation of strings using OPERATOR OVERLOADING

//ccomparision of 2 strings
//size of operator, ternary operator(?:), class member access operator(. , *), scope resolution op(::) BECAUSE these take class name as their operand instead of values   CANNOT BE OVERLOADED

#include <iostream>
#include <string.h>
using namespace std;

class string1{
    char *str;
    public:
    string1()
    {
        strcpy(str, "  ");
    }
    string1 (char *s)
    {
        strcpy(str,s);
    }
    void read()
    {
        cin>>str;//cin.line reads string with spaces
    }
    void display()
    {
        cout<<str<<endl;
    }
    int operator==(string1 s)//operator overloading
    {
        if(strcmp(str,s.str)==0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    string1 s1("Ishan");
    string1 s2;
    s2.read();
    s1.display();
    s2.display();
    if(s1==s2)
        cout<<"EQUAL";
    else
        cout<<"NOT";
    return 0;
}