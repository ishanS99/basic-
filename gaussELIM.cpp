//GAUSS ELIMINATION USING BASIC CPP

#include <iostream>
using namespace std;

class matrix
{
    int x,y,z;
    public:
    int a[3][4];
    int input();
    int upptri();
    int display();
    int solve();
};

int matrix:: input()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
}

int matrix:: upptri()
{
    //while(a[1][0]!=0 && a[2][0]!=0 && a[2][1]!=0)
    //{
    for(int i=0;i<4;i++)
    {
        a[2][i]= ((a[0][0]*a[2][i]) - (a[2][0]*a[0][i])); 
    }
    for(int i=0;i<4;i++)
    {
        a[1][i]= ((a[0][0]*a[1][i]) - (a[1][0]*a[0][i])); 
    }
    for(int i=0;i<4;i++)
    {
        a[2][i]= ((a[1][1]*a[2][i]) - (a[2][1]*a[1][i])); 
    }
}

int matrix:: solve()
{
    z= (a[2][3]/a[2][2]);
    y= (a[1][3]-(z*a[1][2]))/a[1][1];
    x= (a[0][3]-(z*a[0][2])-(y*a[0][1]))/a[0][0];
    
    cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
}

int matrix:: display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    matrix m1;
    cout<<"Enter the elements of matrix"<<endl;
    m1.input();
    cout<<"Matrix before solving"<<endl;
    m1.display();
    m1.upptri();
    cout<<"Upper triangular matrix is "<<endl;
    m1.display();
    m1.solve();
}
