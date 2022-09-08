#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter number: ";
    cin>> x;

    int *ptr=&x;
    cout<<"Add. of var: "<<&x<<endl;

    cout<<"Add. of add: "<< &ptr<<endl;

    cout<<"Value of a pointer: "<<*ptr<<endl;

    cout<<*(&x)<<endl;
    return 0;
}