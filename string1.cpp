//manipulation of strings using OPERATOR OVERLOADING

//concatenation of 2 strings
//size of operator, ternary operator(?:), class member access operator(. , *), scope resolution op(::) BECAUSE these take class name as their operand instead of values   CANNOT BE OVERLOADED

#include <iostream>
#include <string.h>
using namespace std;

class string1{
    char str[40];
    public:
    string1()
    {
        strcpy(str, "  ");
    }
    string1 (char s[])
    {
        strcpy(str,s);
    }
    void read()
    {
        cin>>str;//reads string with spaces
    }
    void display()
    {
        cout<<str<<endl;
    }
    string1 operator+(string1 s)//operator overloading
    {
        strcat(str,s.str);
        return str;
    }
};

int main()
{
    string1 s1("Ishan");
    string1 s2,s3;
    s2.read();
    s1.display();
    s2.display();
    s3 = s1+s2;
    s3.display();
    return 0;
}