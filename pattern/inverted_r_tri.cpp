#include<iostream>
using namespace std;

void tri(int n)
{
    for(int i=0; i>=n; i++)
    {
        for(int j=1; j=i; j++)
        {
            cout<<"* ";
            cout<<"checking";
        }
        cout<<"\n";
    }
}

int main()
{
    tri(5);
    return 0;
}