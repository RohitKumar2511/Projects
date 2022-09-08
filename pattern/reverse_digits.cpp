#include<iostream>
using namespace std;
int rev_dig(int *n)
{
    int rem=0, rev=0;
    while(*n!=0)
    {
        rem = *n%10;
        rev = rev*10+rem;
        *n/=10;
    }
    return rev;
    
}

int main()
{
    int n;
    cin>>n;
    cout<< rev_dig(&n);
    return 0;
}