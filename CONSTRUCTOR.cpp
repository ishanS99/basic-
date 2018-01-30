//learning how to make repositories
//USING CONSTRUCTOR
#include <iostream>
using namespace std;

class student
{
	int roll;
	char name;
	public:
	student()//THIS IS A CONSTRUCTOR
	{
			roll = 1;
			name = 'a';
	}

	void display()
	{
		for(int i=0;i<10;i++)
		{
			cout<<"ROLL NO="<<roll++<<" & "<<"NAME="<<name++<<endl;
		}
	}
};


int main()
{
	student t;
	t.display(); 
}
