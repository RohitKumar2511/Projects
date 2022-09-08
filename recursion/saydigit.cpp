#include<iostream>
using namespace std;

void saydigits(int n, string arr[])
{
    if(n==0)
    {
        //cout<<arr[0]<<" ";
        return ;
    }
    int digit = n%10;
    n = n/10;

    saydigits(n, arr);
    cout<<arr[digit]<<" ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin>>n;
    cout<<endl;
    saydigits(n, arr);
    cout<<endl;
    return 0;
}