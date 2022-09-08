#include<iostream>
using namespace std;

int pyramid(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
            //cout << j;
        }
        cout<<"\n";
    }
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin >> num;

    pyramid(num);

    return 0;
}