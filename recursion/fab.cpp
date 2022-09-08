#include<iostream>
using namespace std;
int printTrib(int n)
{
    if(n==0 || n ==1 || n==2)
        return 0;
    if (n==3)
    {
        return 1;
    }
    else
        return printTrib(n-1) + printTrib(n-2) + printTrib(n-3);
}

int printTribSeries(int n)
{
    int sum = 0;
    for(int i=1; i<n+2; i++)
    {
        cout<<printTrib(i)<<" ";
        sum += printTrib(i); 
        cout<<"Sum: "<<sum<<endl;

    }
    return sum;
}
int main()
{
    int n = 10;
    cin>>n;
    
    printTribSeries(n);
    return 0;
}