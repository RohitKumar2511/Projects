#include<iostream>
using namespace std;
void funsun(int *a)
{
    cout<< *a;
}
int main()
{
    int x;
    cout<<"Enter a no: ";
    cin>>x;
    funsun(&x);
    return 0;
}