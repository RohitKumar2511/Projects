#include<iostream>
using namespace std;

int show_z(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << "S";
        }
        cout << "\n";
    }
}

int main()
{
    show_z(5);
    return 0;
}

