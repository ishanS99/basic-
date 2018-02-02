//a constt objetc can call only a const member func but non--constt can call constt and non constant both

#include <iostream>
#include <string.h>
using namespace std;

class emp{
    //char *str;
    int id;
    public:
    emp(int i)
    {
        id=i;
    }
    void display() const
    {
        id=5;
    cout<<id<<endl;
    }
};

int main()
{
emp a(5);
a.display();
return 0;
}