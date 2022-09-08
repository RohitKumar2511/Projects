#include<iostream>
using namespace std;

void pyramid(int n)
{
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<j << ' ';
        }
        cout<< "\n";
    }
}

int main()
{
    pyramid(5);
    return 0;
}