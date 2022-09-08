#include<iostream>
using namespace std;
int poww(int n, int x)
{
    int temp;
    if( x == 0)
        return 1;
    temp = poww(n, x / 2);
    if (x % 2 == 0)
        return temp * temp;
    else
        return n * temp * temp;
}

int main()
{
    int n=3, x=4;
    int val = poww(x, n);
    cout<<val;
    return 0;
}