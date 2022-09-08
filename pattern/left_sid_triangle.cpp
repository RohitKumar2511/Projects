#include<iostream>
using namespace std;

int tri(int n)
{
    //int temp = n;
    //cout<<temp;
    for(int i=n; i>= 1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "* ";
            //temp--;
            //temp-=temp;
            //cout<<temp;
        }
        cout << "\n";
    }
}

int main()
{
    tri(5);
    return 0;
}

